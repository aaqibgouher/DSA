package javadsa.gfg.blinkedlist.asinglelinkedlist.cdeletion;

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

    public int countNodes() {
        Node temp = this.head;
        int count = 0;

        while (temp != null) {
            count++;
            temp = temp.next;
        }

        return count;
    }

    public void deleteAtHead() {
        if (this.countNodes() <= 0) {
            System.out.println("List is empty");
            return;
        }

        this.head = this.head.next;
    }

    public void deleteAtTail() {
        int len = this.countNodes();

        if (len == 0) {
            System.out.println("List is empty, deletion not valid");
            return;
        } else if (len == 1) {
            this.head = null;
            return;
        } else {
            Node temp = this.head;

            while (temp.next.next != null) {
                temp = temp.next;
            }

            temp.next = null;
        }
    }

    public void deleteAtAny(int pos) {
        int len = this.countNodes();

        if (pos >= 1 && pos <= len) {
            if (pos == 1) {
                this.deleteAtHead();
                return;
            } else if (pos == len) {
                this.deleteAtTail();
                return;
            } else {
                Node temp = this.head;

                for (int i = 1; i < pos - 1; i++) {
                    temp = temp.next;
                }

                temp.next = temp.next.next;
            }
        } else {
            System.out.println("Delete at any: out of bound position");
        }
    }

    public void print() {
        Node temp = this.head;

        if (this.countNodes() > 0) {
            while (temp != null) {
                System.out.print(temp.data + " => ");
                temp = temp.next;
            }
        } else {
            System.out.print("LL is empty");
        }

        System.out.println();
    }

    public static void main(String[] args) {
        LinkedListClass ll = new LinkedListClass();

        // Create a list
        ll.insertAtTail(1);
        ll.insertAtTail(2);
        ll.insertAtTail(3);
        ll.insertAtTail(4);
        ll.insertAtTail(5);
        ll.insertAtTail(6);

        // print
        ll.print();

        // delete at head
        ll.deleteAtHead();

        ll.print();

        // delete at tail
        ll.deleteAtTail();
        ll.print();

        // delete at any
        ll.deleteAtAny(2);
        ll.print();
    }
}
