public class Main {
    static int getSum(int a, int b) {
        if (b == 0) {
            return a;
        }

        return getSum(a + 1, b - 1);
    }

    /**
     * @param a
     * @param b
     * @return
     */
    static int getDiff(int a, int b) {
        if (b == 0) {
            return a;
        }

        return getDiff(a - 1, b - 1);
    }

    static int getProd(int a, int b) {
        if (b == 0) {
            return 1;
        }

        return a * getProd(a, b - 1);
    }

    static int getNthSum(int n) {
        if (n == 0) {
            return 0;
        }

        return n + getNthSum(n - 1);
    }

    public static void main(String[] args) {
        // 1. Sum
        int sum = getSum(50, 10);
        System.out.println(sum);

        // 2. Subtration
        int diff = getDiff(50, 10);
        System.out.println(diff);

        // 3. Multiplication
        int prod = getProd(2, 10);
        System.out.println(prod);

        // 4. Nth sum
        int nthSum = getNthSum(10);
        System.out.println(nthSum);
    }
}
