class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class KListReverse {
    Node head;

    public KListReverse() {
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

    public void reverseKNode(int k) {
        int len = this.countNodes();

        Node start = this.head;
        Node end = this.head;
        Node endAfter = null;

        if (k <= 1 || k > len) {
            return;
        } else {
            int countK = 0;
            Node prev = null;
            Node curr = null;
            Node forw = null;
            Node last = null;

            while (len - k * countK >= k) {
                // Shift end/endAfter after k
                for (int i = 1; i < k; i++) {
                    end = end.next;
                    endAfter = end.next;
                }

                /*
                 * Reverse logic of K node
                 */
                curr = start;
                forw = start.next;
                while (prev != end) {
                    curr.next = prev;
                    prev = curr;
                    curr = forw;

                    if (forw != end) {
                        forw = forw.next;
                    }
                }

                // setting head/last to first reversed node
                if (countK == 0) {
                    this.head = end;
                    start.next = endAfter;
                } else {
                    start.next = endAfter;
                    last.next = end;
                }

                // resetting pointers
                last = start;
                start = endAfter;
                end = endAfter;
                prev = null;
                curr = end;
                forw = end;

                // increasing countK + 1
                countK++;
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
        KListReverse ll = new KListReverse();

        ll.insertAtTail(1);
        ll.insertAtTail(2);
        ll.insertAtTail(3);
        ll.insertAtTail(4);
        ll.insertAtTail(5);
        ll.insertAtTail(6);
        ll.insertAtTail(7);
        ll.insertAtTail(8);
        ll.insertAtTail(9);

        ll.print();

        ll.reverseKNode(9);
        ll.print();
    }
}
