public class Main {
    /**
     * @param args
     */
    public static void main(String[] args) {
        int num1 = 10, num2 = 20;
        char ch = '+';

        switch (ch) {
            case '+':
                System.out.println(num1 + num2);
                break;
            case '-':
                System.out.println(num1 - num2);
                break;
            case '*':
                System.out.println(num1 * num2);
                break;
            case '/':
                System.out.println(num1 / num2);
                break;
            default:
                break;
        }
    }
}
