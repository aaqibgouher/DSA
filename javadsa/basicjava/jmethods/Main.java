public class Main {
    public static void sayHello() {
        System.out.println("Hello, Guys!");
    }

    /**
     * @param a
     * @param b
     * @param ch
     * @return
     */
    public static double evaluate(int a, int b, char ch) {
        double result = 0;
        switch (ch) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                result = a / b;
                break;
            default:
                break;
        }

        return result;
    }

    public static void main(String[] args) {
        // 1. Basic method
        sayHello();

        // 2. Basic calculator
        System.out.println(evaluate(2, 4, '/'));
    }
}