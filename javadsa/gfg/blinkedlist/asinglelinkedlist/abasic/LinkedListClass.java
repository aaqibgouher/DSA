package javadsa.gfg.blinkedlist.asinglelinkedlist.abasic;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedListClass {
    Node head;

    public LinkedListClass() {
        this.head = null;
    }

    public static void main(String[] args) {
        LinkedListClass ll = new LinkedListClass();
    }
}
