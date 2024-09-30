import java.util.Stack;

public class PackageStack {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();

        // push
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);

        System.out.println(stack);

        // pop
        stack.pop();
        System.out.println(stack);

        // peek
        System.out.println(stack.peek());

        // is emptyp
        System.out.println(stack.isEmpty());

    }
}
