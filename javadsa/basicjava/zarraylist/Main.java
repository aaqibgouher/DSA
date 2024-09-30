import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 1. Array: fixed & immutable size
        // System.out.println("Enter array size:");
        // int n = sc.nextInt();
        // int[] arr = new int[n];

        // System.out.println("Enter array element:");
        // for (int i = 0; i < n; i++) {
        // arr[i] = sc.nextInt();
        // }

        // System.out.println("Array elements are:");
        // for (int i = 0; i < n; i++) {
        // System.out.print(arr[i] + " ");
        // }

        // 2. Array List: dynamic & mutable size
        // ArrayList<Integer> arr = new ArrayList<Integer>();

        // System.out.println("Enter list size:");
        // int n = sc.nextInt();

        // for (int i = 0; i < n; i++) {
        // arr.add(sc.nextInt());
        // }

        // System.out.println(arr);
        // for (int i = 0; i < n; i++) {
        // System.out.println(arr.get(i));
        // }

        // 3. Custom array list class
        ArrayListClass list = new ArrayListClass();
        System.out.println(list.get());

        // add
        list.add(1);
        list.add(3);
        list.add(5);

        System.out.println(list.get());

        // update
        list.update(0, 6);
        System.out.println(list.get());

        // delete
        list.delete(0);
        System.out.println(list.get());

        // find by id
        System.out.println(list.findById(0));

        // get size
        System.out.println(list.getSize());

        // Loop
        System.out.println("Loop");
        ArrayList<Integer> nums = new ArrayList<Integer>();

        for (int i = 1; i <= 5; i++) {
            nums.add(i);
        }

        for (int i = 0; i < nums.size(); i++) {
            System.err.print(nums.get(i) + " ");
        }
    }
}
