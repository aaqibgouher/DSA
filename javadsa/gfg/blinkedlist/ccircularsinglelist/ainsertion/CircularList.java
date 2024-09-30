package javadsa.gfg.blinkedlist.ccircularsinglelist.ainsertion;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class CircularList {
    Node head;

    public CircularList() {
        this.head = null;
    }

    public void insertAtTail(int data) {
        Node node = new Node(data);

        if (this.head == null) {
            this.head = node;
            node.next = this.head;
            return;
        }

        Node temp = this.head;
        while (temp.next != this.head) {
            temp = temp.next;
        }

        temp.next = node;
        node.next = this.head;
    }

    public void insertAtHead(int data) {
        Node node = new Node(data);

        if (this.head == null) {
            this.head = node;
            node.next = this.head;
            return;
        }

        Node temp = this.head;

        while (temp.next != this.head) {
            temp = temp.next;
        }

        temp.next = node;
        node.next = this.head;
        this.head = node;
    }

    public void insertAtAny(int data, int pos) {
        int len = this.countNodes();

        if (pos == 1) {
            this.insertAtHead(data);
        } else if (pos == len + 1) {
            this.insertAtTail(data);
        } else if (pos > 1 && pos <= len) {
            Node node = new Node(data);

            Node temp = this.head;
            for (int i = 1; i < pos - 1; i++) {
                temp = temp.next;
            }

            node.next = temp.next;
            temp.next = node;
        } else {
            System.out.println("Position out of bound ...");
        }
    }

    public int countNodes() {
        Node temp = this.head;
        int count = 0;

        if (this.head == null)
            return 0;

        do {
            count++;
            temp = temp.next;
        } while (temp != this.head);

        return count;
    }

    public void print() {
        Node temp = this.head;

        do {
            System.out.print(temp.data + " => ");
            temp = temp.next;
        } while (temp != this.head);
        System.out.println();
    }

    public static void main(String[] args) {
        CircularList list = new CircularList();

        // add tail
        list.insertAtTail(1);
        list.insertAtTail(2);
        list.insertAtTail(3);

        list.print();

        // add head
        list.insertAtHead(4);
        list.print();

        // add any
        list.insertAtAny(7, 4);
        list.print();
    }
}
