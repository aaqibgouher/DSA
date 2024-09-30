package javadsa.gfg.blinkedlist.ccircularsinglelist.bdeletion;

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

        node.next = this.head;
        temp.next = node;
    }

    public void deleteFromHead() {
        if (this.head == null) {
            System.out.println("List is empty, cant delete");
            return;
        } else if (this.head.next == this.head) {
            this.head = null;
            return;
        } else {
            Node temp = this.head;

            while (temp.next != this.head) {
                temp = temp.next;
            }

            this.head = this.head.next;
            temp.next = this.head;
        }
    }

    public void deleteFromTail() {
        if (this.head == null) {
            System.out.println("List is empty, cant delete ");
        } else if (this.head.next == this.head) {
            this.head = null;
        } else {
            Node temp = this.head;

            while (temp.next.next != this.head) {
                temp = temp.next;
            }

            temp.next = temp.next.next;
        }
    }

    public void deleteFromAny(int pos) {
        int len = this.countNodes();

        if (pos == 1) {
            this.deleteFromHead();
        } else if (pos == len) {
            this.deleteFromTail();
        } else if (pos > 1 && pos < len) {
            Node temp = this.head;

            for (int i = 1; i < pos - 1; i++) {
                temp = temp.next;
            }

            temp.next = temp.next.next;
        } else {
            System.out.println("Deletion not possible, out of bound.");
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

        if (this.head == null) {
            System.out.println("List is empty");
            return;
        }

        do {
            System.out.print(temp.data + " -> ");
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
        list.insertAtTail(4);
        list.insertAtTail(5);

        // print
        list.print();

        // delete head
        // list.deleteFromHead();
        // list.print();

        // delete from tail
        // list.deleteFromTail();
        // list.print();

        // delete from any
        // list.deleteFromAny(2);
        // list.print();
    }
}
