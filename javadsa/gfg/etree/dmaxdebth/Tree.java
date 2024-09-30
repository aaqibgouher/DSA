class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

public class Tree {
    public int maxDebth(Node node) {
        if (node == null) {
            return 0;
        }

        int leftMax = maxDebth(node.left);
        int rightMax = maxDebth(node.right);

        return 1 + Math.max(leftMax, rightMax);
    }

    public static void main(String[] args) {
        // Creating instance
        Tree tree = new Tree();

        // Building a tree
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.right.left = new Node(4);
        root.right.left.left = new Node(6);
        root.right.right = new Node(5);

        // Max debth
        System.out.println(tree.maxDebth(root));
    }
}
