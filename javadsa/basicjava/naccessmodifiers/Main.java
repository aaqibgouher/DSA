public class Main {
    public void sayHelloPublic() {
        System.out.println("Hello with public");
    }

    static void sayHelloStatic() {
        System.out.println("Hello with static");
    }

    public static void main(String[] args) {
        Main obj = new Main();
        obj.sayHelloPublic();

        // static method: no need to create obj
        sayHelloStatic();
    }
}
