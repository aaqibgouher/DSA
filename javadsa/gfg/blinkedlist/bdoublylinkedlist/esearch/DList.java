package javadsa.gfg.blinkedlist.bdoublylinkedlist.esearch;

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

    public int search(int ele) {
        int pos = -1;
        int count = 0;

        DNode temp = this.head;

        while (temp != null) {
            count++;
            if (temp.data == ele) {
                pos = count;
                break;
            }

            temp = temp.next;
        }

        return pos;
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

        // insert
        list.insertAtTail(1);
        list.insertAtTail(2);
        list.insertAtTail(3);
        list.insertAtTail(4);
        list.insertAtTail(5);

        // print
        list.printFromHead();
        list.printFromTail();

        // search
        System.out.println(list.search(10));

    }

}
