public class InsertionSort {
    public void print(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }

    public void insertionSort(int[] arr, int n) {
        for (int i = 1; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (arr[j] > arr[j + 1]) {
                    // swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                } else {
                    break;
                }
            }
        }
    }

    public static void main(String[] args) {
        // instance
        InsertionSort insertionObj = new InsertionSort();

        int[] arr = { 14, 9, 15, 12, 6, 8, 13 };
        int n = arr.length;

        // print
        insertionObj.print(arr, n);

        // sort
        insertionObj.insertionSort(arr, n);

        // print
        insertionObj.print(arr, n);
    }
}
