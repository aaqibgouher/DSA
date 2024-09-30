public class Main {
    public static void main(String[] args) {
        Parent parentObj = new Parent();
        System.out.println(parentObj.x);

        Parent.Child childObj = parentObj.new Child();
        System.out.println(childObj.name);
    }
}
