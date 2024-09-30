interface Calculator {
    int calculate(int a, int b);

    int calculateProd(int a, int b, int c);
}

class LambdaClass {
    public static void main(String[] args) {
        Calculator add = (a, b) -> a + b;
        System.out.println("a + b = " + add.calculate(10, 5));

        Calculator sub = (a, b) -> a - b;
        System.out.println("a - b = " + sub.calculate(10, 5));

        Calculator prod = (a, b, c) -> a * b * c;
        System.out.println("a * b * c = " + prod.calculateProd(1, 2, 3));
    }
}