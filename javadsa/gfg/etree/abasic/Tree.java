class Node {
    Node left;
    int data;
    Node right;

    Node(int data) {
        this.left = null;
        this.data = data;
        this.right = null;
    }
}

public class Tree {
    public void preOrder(Node node) {
        if (node == null) {
            return;
        }

        System.out.print(node.data + " ");
        preOrder(node.left);
        preOrder(node.right);
    }

    public void inOrder(Node node) {
        if (node == null) {
            return;
        }

        inOrder(node.left);
        System.out.print(node.data + " ");
        inOrder(node.right);
    }

    public void postOrder(Node node) {
        if (node == null) {
            return;
        }

        // Left, Right, Root
        postOrder(node.left);
        postOrder(node.right);
        System.out.print(node.data + " ");
    }

    public static void main(String[] args) {
        Tree tr = new Tree();

        // creation of a tree
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(5);
        root.left.right = new Node(6);
        root.right.left = new Node(8);

        // DFS
        // pre order traversal
        tr.preOrder(root);

        System.out.println();

        // in order traversal
        tr.inOrder(root);

        System.out.println();
        // post order
        tr.postOrder(root);
    }
}
