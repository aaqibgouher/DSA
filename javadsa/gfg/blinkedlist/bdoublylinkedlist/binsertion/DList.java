package javadsa.gfg.blinkedlist.bdoublylinkedlist.binsertion;

class DNode {
    int data;
    DNode prev;
    DNode next;

    DNode(int data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

public class DList {
    DNode head, tail;

    public DList() {
        this.head = null;
        this.tail = null;
    }

    public void insertAtHead(int data) {
        DNode node = new DNode(data);

        if (this.head == null && this.tail == null) {
            this.head = node;
            this.tail = node;
            return;
        }

        node.next = this.head;
        this.head.prev = node;
        this.head = node;
    }

    public void insertAtTail(int data) {
        DNode node = new DNode(data);

        if (this.head == null && this.tail == null) {
            this.head = node;
            this.tail = node;
            return;
        }

        node.prev = this.tail;
        this.tail.next = node;
        this.tail = node;
    }

    public void insertAtAny(int data, int pos) {
        System.out.println(this.countNodes() + " total nodes");
        int len = this.countNodes();

        if (pos == 1) {
            this.insertAtHead(data);
            return;
        } else if (pos == len + 1) {
            this.insertAtTail(data);
            return;
        } else if (pos > 1 && pos <= len) {
            DNode node = new DNode(data);
            DNode temp = this.head;

            for (int i = 1; i < pos - 1; i++) {
                temp = temp.next;
            }

            node.next = temp.next;
            temp.next.prev = node;
            temp.next = node;
            node.prev = temp;
        } else {
            System.out.println("Invalid index");
        }
    }

    public int countNodes() {
        DNode temp = this.head;
        int count = 0;

        while (temp != null) {
            count++;
            temp = temp.next;
        }

        return count;
    }

    public void printFromHead() {
        DNode temp = this.head;

        while (temp != null) {
            System.out.print(temp.data + " => ");
            temp = temp.next;
        }

        System.out.println();
    }

    public void printFromTail() {
        DNode temp = this.tail;

        while (temp != null) {
            System.out.print(temp.data + " <= ");
            temp = temp.prev;
        }

        System.out.println();
    }

    public static void main(String[] args) {
        DList list = new DList();

        // insert at head
        list.insertAtHead(1);
        list.insertAtHead(2);
        list.insertAtHead(3);
        list.insertAtHead(4);

        // print
        list.printFromHead();
        list.printFromTail();

        // insert at tail
        list.insertAtTail(9);
        list.insertAtTail(10);

        // print
        list.printFromHead();
        list.printFromTail();

        // insert any any
        list.insertAtAny(15, 7);

        // print
        list.printFromHead();
    }
}
