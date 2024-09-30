class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class ListPair {
    Node head;

    ListPair() {
        this.head = null;
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

    public void swapPair() {
        int len = this.countNodes();

        if (len <= 1) {
            return;
        } else {
            Node prev = this.head;
            Node temp = this.head.next;
            Node last = this.head;
            int pairCount = 0;

            while (prev != null || temp != null) {
                prev.next = temp.next;
                temp.next = prev;

                if (pairCount == 0) {
                    this.head = temp;
                    pairCount++;
                    last = prev;
                } else {
                    last.next = temp;
                    last = prev;
                }

                if (prev.next == null || prev.next.next == null) {
                    break;
                } else {
                    prev = prev.next;
                    temp = prev.next;
                }
            }
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
        ListPair ll = new ListPair();

        // Insertion
        // 2. Tail
        ll.insertAtTail(1);
        ll.insertAtTail(2);
        ll.insertAtTail(3);
        ll.insertAtTail(4);
        ll.insertAtTail(5);

        ll.print();

        ll.swapPair();
        ll.print();
    }
}
