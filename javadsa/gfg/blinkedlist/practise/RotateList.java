class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class RotateList {
    Node head;

    public RotateList() {
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

    public void rotate(int k) {
        if (this.head == null) {
            System.out.println("List is empty");
            return;
        } else if (this.head.next == null) {
            return;
        } else {
            while (k > 0) {
                Node start = null;
                Node end = this.head;

                while (end.next != null) {
                    start = end;
                    end = end.next;
                }

                start.next = end.next;
                end.next = head;
                this.head = end;

                // decrese the k
                k--;
            }
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
        RotateList ll = new RotateList();

        // insert at tail
        ll.insertAtTail(1);
        ll.insertAtTail(2);
        ll.insertAtTail(3);
        ll.insertAtTail(4);
        ll.insertAtTail(5);

        // print
        ll.print();

        // rotate list
        ll.rotate(3);

        // print
        ll.print();
    }
}
