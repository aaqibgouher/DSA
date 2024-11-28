import java.util.HashMap;
import java.util.Map;

public class Hashing {
    public void print(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }

    // This approach will take O(n^2)
    public Map<Integer, Integer> countDigit(int[] arr, int n) {
        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            map.put(arr[i], count);
        }

        return map;
    }

    // Optimised version - O(n)
    public void countDigitV2(int[] arr, int n) {
        int[] hash = new int[10];

        for (int i = 0; i < n; i++) {
            hash[arr[i]] += 1;
        }

        print(hash, 10);
    }

    // Optimised version - O(n)
    public void countCharacters(String str, int n) {
        int[] hash = new int[26];

        for (int i = 0; i < n; i++) {
            int index = (int) str.charAt(i) - 97;
            hash[index] += 1;
        }

        print(hash, 26);
    }

    public void findFrequence(int[] arr, int n) {
        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < n; i++) {
            if (!map.containsKey(arr[i])) {
                map.put(arr[i], 1);
            } else {
                map.put(arr[i], map.get(arr[i]) + 1);
            }
        }

        System.out.println(map);
        int min = 9999, max = -9999;

        // map.forEach((key, value) -> {
        // if (value > max) {
        // max = value;
        // }

        // if (value < min) {
        // min = value;
        // }
        // });

        for (Integer key : map.keySet()) {
            if (map.get(key) > max) {
                max = map.get(key);
            }

            if (map.get(key) < min) {
                min = map.get(key);
            }
        }

        System.out.println(max + " " + min);

    }

    public static void main(String[] args) {
        // Instance
        Hashing hashObj = new Hashing();

        // 1) Count no. of times each digit occurs in an array
        int[] arr = { 1, 2, 1, 3, 4, 1, 2 };
        int n = arr.length;

        hashObj.print(arr, n);

        System.out.println(hashObj.countDigit(arr, n));

        hashObj.countDigitV2(arr, n);

        // 2) Count no. of times each characters occur in a string
        String str = "abfdsavcsdfadafdacfsdfsaz";
        n = str.length();

        hashObj.countCharacters(str, n);

        // 3. Find the highest/lowest frequency element
        int[] arrNew = { 10, 5, 10, 15, 10, 5 };
        n = arrNew.length;

        hashObj.findFrequence(arrNew, n);
    }
}
