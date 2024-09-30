enum Status {
    ACTIVE,
    INACTIVE,
    DELETED
}

public class Main {
    public int num = 10;

    public class Nested {
        public String name = "Aaqib";
    }

    public static void main(String[] args) {
        Main obj = new Main();
        Main.Nested nestedObj = obj.new Nested();
        System.out.println(obj.num);
        System.out.println(nestedObj.name);
        System.out.println(Status.ACTIVE);
    }
}