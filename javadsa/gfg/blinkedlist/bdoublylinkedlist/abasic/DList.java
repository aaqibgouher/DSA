package javadsa.gfg.blinkedlist.bdoublylinkedlist.abasic;

class DNode {
    DNode prev;
    int data;
    DNode next;

    DNode(int data) {
        this.prev = null;
        this.data = data;
        this.next = null;
    }
}

public class DList {
    DNode head, tail;

    public DList() {
        this.head = null;
        this.tail = null;
    }

    public static void main(String[] args) {
        System.out.println("Doubly Linked List");
    }
}
