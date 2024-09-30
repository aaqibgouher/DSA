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

        if (this.front == null || this.rear == null) {
            this.front = node;
            this.rear = node;
            return;
        }

        Node temp = this.front;

        while (temp.next != null) {
            temp = temp.next;
        }

        this.rear.next = node;
        this.rear = node;
    }

    public void print() {
        Node temp = this.front;

        while (temp != null) {
            System.out.print(temp.data + " => ");
            temp = temp.next;
        }

        System.out.println();
    }

    public static void main(String[] args) {
        QueueList ql = new QueueList();

        // enqueue
        ql.enqueue(1);
        ql.enqueue(2);
        ql.enqueue(3);
        ql.enqueue(4);
        ql.enqueue(5);

        // print
        ql.print();
    }
}
