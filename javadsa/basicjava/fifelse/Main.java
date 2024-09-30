public class Main {
    /**
     * @param args
     */
    public static void main(String[] args) {
        int marks = 80;

        if (marks >= 90 && marks <= 100) {
            System.out.println("Outstanding");
        } else if (marks >= 80 && marks <= 89) {
            System.out.println("Excellent");
        } else if (marks >= 70 && marks <= 79) {
            System.out.println("Good");
        } else if (marks >= 60 && marks <= 69) {
            System.out.println("Not Good");
        } else {
            System.out.println("Poor");
        }
    }
}
