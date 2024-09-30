public class Main {
    public static void main(String[] args) {
        Todo myTodo = new Todo();

        System.out.println(myTodo.list());

        // add
        myTodo.create("First");
        myTodo.create("Second");
        myTodo.create("Third");

        System.out.println(myTodo.list());

        // delete
        myTodo.delete(0);
        System.out.println(myTodo.list());

        // update
        myTodo.update(0, "Second V2");
        System.out.println(myTodo.list());
    }
}
