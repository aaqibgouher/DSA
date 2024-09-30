class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class QueueList {
    Node front;
    Node rear;

    public QueueList() {
        this.front = null;
        this.rear = null;
    }

    public void enqueue(int data) {
        Node node = new Node(data);

        if (this.rear == null) {
            this.front = node;
            this.rear = node;
            return;
        }

        this.rear.next = node;
        this.rear = node;
    }

    public void dequeue() {
        if (isEmpty() == true) {
            System.out.println("List is empty, dequeue operation invalid.");
            return;
        }

        this.front = this.front.next;
        if (this.front == null) {
            this.rear = null;
        }
    }

    public int peek() {
        if (isEmpty() == true) {
            System.out.println("List is empty, no peek");
            return -1;
        }

        return this.rear.data;
    }

    public boolean isEmpty() {
        if (this.front == null && this.rear == null) {
            return true;
        } else {
            return false;
        }
    }

    public void print() {
        Node temp = this.front;

        if (isEmpty() == true) {
            System.out.println("List is empty, cant print.");
        } else {
            while (temp != null) {
                System.out.print(temp.data + " => ");
                temp = temp.next;
            }
        }

        System.out.println();
    }

    public static void main(String[] args) {
        QueueList que = new QueueList();

        // enqueue
        que.enqueue(1);
        que.enqueue(2);
        que.enqueue(3);
        que.enqueue(4);

        que.print();

        // dequeue
        que.dequeue();

        que.print();

        // peek
        System.out.println(que.peek());
    }
}

"fromUserId._id": "1",
""