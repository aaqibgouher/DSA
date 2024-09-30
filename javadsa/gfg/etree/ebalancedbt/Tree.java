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

    public Boolean isBalanced(Node node) {
        if (node == null) {
            return true;
        }

        int left = maxDebth(node.left);
        int right = maxDebth(node.right);

        if (Math.abs(left - right) > 1) {
            return false;
        }

        if (left == 0 || right == 0) {
            return false;
        }

        return true;
    }

    public Boolean isBalancedV2(Node node) {
        if (node.left == null && node.right == null) {
            return true;
        }

        int left = maxDebth(node.left);
        int right = maxDebth(node.right);

        if (Math.abs(left - right) <= 1 && isBalancedV2(node.left) && isBalancedV2(node.right)) {
            return true;
        } else {
            return false;
        }
    }

    public int isBalancedV3(Node node) {

    }

    public static void main(String[] args) {
        // Creating instance
        Tree tree = new Tree();

        // Building a tree
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.left.left.left = new Node(6);
        root.left.left.right = new Node(7);
        root.left.left.left.left = new Node(8);
        root.right = new Node(3);

        // Max debth
        System.out.println(tree.maxDebth(root));

        // Is Bananced
        System.out.println(tree.isBalanced(root));
        System.out.println(tree.isBalancedV2(root));
    }
}
