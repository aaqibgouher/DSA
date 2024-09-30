class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class MergeList {
    Node head;

    MergeList() {
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

    public void merge(Node head1, Node head2) {
        Node temp1 = head1;
        Node temp2 = head2;
        Node last1 = null;
        Node last2 = null;

        while (temp1 != null || temp2 != null) {
            if (temp1.data < temp2.data && temp1.next.data < temp2.data) {
                while (temp1.data < temp2.data && temp1.next != null && temp1.next.data < temp2.data) {
                    temp1 = temp1.next;
                }

                last1 = temp2.next;
                temp2.next = temp1.next;
                temp1.next = temp2;
                temp2 = last1;
            } else {
                while (temp2.data < temp1.data && temp2.next != null && temp2.next.data < temp1.data) {
                    temp2 = temp2.next;
                }

                last1 = temp1.next;
                last2 = temp2.next;
                temp2.next = temp1;
                temp1 = last1;
                temp2 = last2;
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
        MergeList ll1 = new MergeList();
        MergeList ll2 = new MergeList();

        ll1.insertAtTail(1);
        ll1.insertAtTail(3);

        ll1.print();

        ll2.insertAtTail(2);
        ll2.insertAtTail(4);

        ll2.print();

        ll1.merge(ll1.head, ll2.head);

        if (ll1.head.data < ll2.head.data) {
            ll1.print();
        } else {
            ll2.print();
        }
    }
}