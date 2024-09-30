public class MyStack {
    int[] stack;
    int top;
    int max;

    public MyStack(int max) {
        this.stack = new int[max];
        this.top = -1;
        this.max = max;
    }

    public void push(int data) {
        // if stack overflow, throw error
        if (this.isFull() == true) {
            System.out.println("Stack overflow");
            return;
        }

        this.top++;
        this.stack[this.top] = data;
    }

    public void pop() {
        System.out.println(this.isEmpty() + " is");
        if (this.isEmpty() == true) {
            System.out.println("Stack is empty");
            return;
        }

        this.top--;
    }

    public Boolean isEmpty() {
        if (this.top == -1) {
            return true;
        } else {
            return false;
        }
    }

    public Boolean isFull() {
        if (this.top == this.max - 1) {
            return true;
        } else {
            return false;
        }
    }

    public int peek() {
        if (this.isEmpty() == true) {
            System.out.println("Stack is empty, peek is not there");
        }

        return this.stack[this.top];
    }

    public void print() {
        if (this.isEmpty() == true) {
            System.out.println("Stack is empty, cant print");
        }

        for (int i = 0; i <= this.top; i++) {
            System.out.print(this.stack[i] + " ");
        }

        System.out.println();
    }

    public static void main(String[] args) {
        MyStack myStack = new MyStack(5);

        // push
        myStack.push(1);
        myStack.push(2);
        myStack.push(3);
        myStack.push(4);
        myStack.push(5);

        // print
        myStack.print();

        // pop
        myStack.pop();
        myStack.print();

        // peek
        System.out.println(myStack.peek());
    }
}