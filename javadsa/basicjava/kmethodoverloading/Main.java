public class Main {
    static void getSum() {
        System.out.println("No parameters");
    }

    static int getSum(int a, int b) {
        return a + b;
    }

    static String getSum(String a, String b) {
        return a + b;
    }

    /**
     * @param args
     */
    public static void main(String[] args) {
        getSum();
        System.out.println(getSum(2, 5));
        System.out.println(getSum("Aaqib", "Gouher"));
    }
}
