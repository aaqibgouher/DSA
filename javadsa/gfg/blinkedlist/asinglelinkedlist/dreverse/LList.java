package javadsa.gfg.blinkedlist.asinglelinkedlist.dreverse;

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

    public void reverse() {
        if (this.countNodes() > 0) {
            Node forward = this.head;
            Node mid = this.head;
            Node backward = null;

            while (forward != null && mid != null) {
                forward = forward.next;
                mid.next = backward;
                backward = mid;
                mid = forward;
            }

            this.head = backward;
        } else {
            System.out.println("Reverse not possible, list is empty");
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

        // insert at tail
        list.insertAtTail(1);
        list.insertAtTail(2);
        list.insertAtTail(3);
        list.insertAtTail(4);
        list.insertAtTail(5);

        // print
        list.print();

        // reverse
        list.reverse();

        list.print();
    }
}
