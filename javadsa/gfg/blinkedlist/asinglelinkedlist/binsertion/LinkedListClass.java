package javadsa.gfg.blinkedlist.asinglelinkedlist.binsertion;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedListClass {
    Node head;

    LinkedListClass() {
        this.head = null;
    }

    public void insertAtHead(int data) {
        // create a node
        Node node = new Node(data);

        if (head == null) {
            this.head = node;
            return;
        }

        node.next = this.head;
        this.head = node;
    }

    public void insertAtTail(int data) {
        // create a node
        Node node = new Node(data);

        // if head is null
        if (this.head == null) {
            this.head = node;
            return;
        }

        // else
        Node temp = this.head;
        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = node;
    }

    public void insertAtAny(int data, int pos) {
        // if pos = 1
        if (pos == 1) {
            this.insertAtHead(data);
        } else if (pos > 1 && pos <= this.countNodes() + 1) {
            Node node = new Node(data);

            Node temp = this.head;

            for (int i = 1; i < pos - 1; i++) {
                temp = temp.next;
            }

            node.next = temp.next;
            temp.next = node;
        } else {
            System.out.println("Linked list is not having that position");
        }
    }

    public int countNodes() {
        Node temp = this.head;
        int count = 0;

        while (temp != null) {
            count++;
            temp = temp.next;
        }

        return count;
    }

    public void print() {
        Node temp = this.head;

        while (temp != null) {
            System.out.print(temp.data + " => ");
            temp = temp.next;
        }

        System.out.println();
    }

    public static void main(String[] args) {
        LinkedListClass ll = new LinkedListClass();

        // Insertion
        // 1. Head
        ll.insertAtHead(1);
        ll.insertAtHead(2);
        ll.insertAtHead(3);

        ll.print();

        // 2. Tail
        ll.insertAtTail(4);
        ll.insertAtTail(5);

        ll.print();

        // 3. Any Post
        ll.insertAtAny(6, 7);
        ll.print();
    }
}
