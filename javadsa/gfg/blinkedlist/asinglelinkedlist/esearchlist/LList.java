package javadsa.gfg.blinkedlist.asinglelinkedlist.esearchlist;

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

    public LList() {
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

    public int search(int data) {
        Node temp = this.head;
        int count = 0;
        int pos = -1;

        while (temp != null) {
            count++;
            if (temp.data == data) {
                pos = count;
                break;
            }

            temp = temp.next;
        }

        return pos;
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
        LList list1 = new LList();

        // insert at tail
        list1.insertAtTail(1);
        list1.insertAtTail(3);
        list1.insertAtTail(7);
        list1.insertAtTail(9);

        list1.print();

        System.out.println(list1.search(6));

    }
}
