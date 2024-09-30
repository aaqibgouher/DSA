class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class StackList {
    Node top;

    public StackList() {
        this.top = null;
    }

    public void push(int data) {
        Node node = new Node(data);

        if (this.top == null) {
            this.top = node;
            return;
        }

        node.next = top;
        this.top = node;
    }

    public void pop() {
        if (this.isEmpty()) {
            System.out.println("Stack is empty");
            return;
        }

        this.top = this.top.next;
    }

    public Boolean isEmpty() {
        if (this.top == null) {
            return true;
        } else {
            return false;
        }
    }

    public Object peek() {
        if (this.isEmpty()) {
            return null;
        } else {
            return this.top.data;
        }
    }

    public void print() {
        Node temp = this.top;

        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }

        System.out.println();
    }

    public static void main(String[] args) {
        StackList stack = new StackList();

        // push
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);

        // print
        stack.print();

        // pop
        stack.pop();
        stack.print();

        System.out.println(stack.peek());
    }
}
