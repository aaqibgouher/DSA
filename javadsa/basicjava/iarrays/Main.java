public class Main {
    /**
     * @param args
     */
    public static void main(String[] args) {
        int[][] marks = { { 1, 2, 3 }, { 4, 5 }, { 6 } };

        // 1. using for
        for (int i = 0; i < marks.length; i++) {
            for (int j = 0; j < marks[i].length; j++) {
                System.out.print(marks[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println();

        // 2. using for each
        for (int[] x : marks) {
            for (int y : x) {
                System.out.print(y + " ");
            }
            System.out.println();
        }
    }
}
