public class Main {
    /**
     * @param args
     */
    public static void main(String[] args) {
        int i = 1;

        // 1. While loop
        while (i <= 5) {
            System.out.print(i + " ");
            i++;
        }

        System.out.println();

        // 2. For loop
        for (int j = 1; j <= 5; j++) {
            System.out.print(j + " ");
        }

        System.out.println();

        // 3. Do while loop
        int k = 1;
        do {

            System.out.print(k + " ");
            k++;
        } while (k <= 5);

        System.out.println();

        // 4. For-each loop
        int[] marks = { 2, 1, 5, 8 };

        for (int m : marks) {
            System.out.print(m + " ");
        }

        System.out.println();

        // 5. Break/Continue loop
        for (int n = 0; n < marks.length; n++) {
            if (n == 1) {
                continue;
            }
            System.out.print(marks[n] + " ");
        }
    }
}
