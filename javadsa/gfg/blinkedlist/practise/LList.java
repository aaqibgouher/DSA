package javadsa.gfg.blinkedlist.practise;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LList {
    Node head;

    LList() {
        this.head = null;
    }

    public void insertAtHead(int data) {
        Node node = new Node(data);

        if (this.head == null) {
            this.head = node;
            return;
        }

        node.next = this.head;
        this.head = node;
    }

    public void insertAtTail(int data) {
        Node node = new Node(data);

        if (this.head == null) {
            this.head = node;
            return;
        }

        Node temp = this.head;

        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = node;
    }

    public void insertAtAny(int pos, int data) {
        if (pos == 1) {
            this.insertAtHead(data);
        } else {
            Node node = new Node(data);

            Node temp = this.head;

            for (int i = 1; i < pos - 1; i++) {
                temp = temp.next;
            }

            node.next = temp.next;
            temp.next = node;
        }
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
        LList list = new LList();

        // insert at head
        list.insertAtHead(1);
        list.insertAtHead(2);
        list.insertAtHead(3);
        list.insertAtHead(4);

        // print
        list.print();

        // insert at tail
        list.insertAtTail(6);
        list.insertAtTail(7);

        list.print();

        // insert at any
        list.insertAtAny(5, 10);
        list.print();
    }
}
