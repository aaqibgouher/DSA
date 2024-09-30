package javadsa.gfg.blinkedlist.bdoublylinkedlist.cdeletion;

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

    public void deleteFromHead() {
        if (this.head == null && this.tail == null) {
            System.out.println("DList empty");
            return;
        } else if (this.head.next == null && this.tail.prev == null) {
            this.head = null;
            this.tail = null;
            return;
        } else {
            this.head = this.head.next;
            this.head.prev = null;
        }
    }

    public void deleteFromTail() {
        if (this.head == null && this.tail == null) {
            System.out.println("Dlist is empty");
            return;
        } else if (this.head.next == null && this.tail.prev == null) {
            this.head = null;
            this.tail = null;
            return;
        } else {
            this.tail = this.tail.prev;
            this.tail.next = null;
        }
    }

    public void deleteFromAny(int pos) {
        int len = this.countNodes();

        if (pos == 1) {
            this.deleteFromHead();
            return;
        } else if (pos == len) {
            this.deleteFromTail();
            return;
        } else if (pos > 1 && pos < len) {
            DNode temp = this.head;

            for (int i = 1; i < pos; i++) {
                temp = temp.next;
            }

            temp.prev.next = temp.next;
            temp.next.prev = temp.prev;
        } else {
            System.out.println("Deletion not possible, out of bound");
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

        // insert
        list.insertAtTail(1);
        list.insertAtTail(2);
        list.insertAtTail(3);
        list.insertAtTail(4);
        list.insertAtTail(5);

        // print
        list.printFromHead();
        list.printFromTail();

        // delete from head
        // list.deleteFromHead();

        // delete from tail
        // list.deleteFromTail();

        // delete from any
        list.deleteFromAny(3);
        list.printFromHead();
        list.printFromTail();
    }

}
