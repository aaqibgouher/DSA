public class Main {
    /**
     * @param args
     */
    public static void main(String[] args) {
        double percentage = 1.234;
        int percenterInt = (int) percentage;
        final double percentageDouble = percenterInt;

        System.out.println(percentage);
        System.out.println(percenterInt);
        System.out.println(percentageDouble);
    }
}
