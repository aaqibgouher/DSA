import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
        this.left = this.right = null;
    }
}

public class Tree {
    int maxPathSum = 0;

    public List<List<Integer>> levelOrder(Node node) {
        List<List<Integer>> tree = new ArrayList<>();
        Queue<Node> queue = new LinkedList<Node>();

        // add first node
        queue.add(node);

        while (queue.isEmpty() != true) {
            int len = queue.size();
            List<Integer> list = new ArrayList<>();

            for (int i = 1; i <= len; i++) {
                Node curr = queue.poll();

                if (curr.left != null) {
                    queue.add(curr.left);
                }

                if (curr.right != null) {
                    queue.add(curr.right);
                }

                list.add(curr.data);
            }

            tree.add(list);
        }

        return tree;
    }

    public int maxSum(Node node) {
        if (node == null) {
            return 0;
        }

        int left = maxSum(node.left);
        int right = maxSum(node.right);
        int leftRootRight = left + node.data + right;

        this.maxPathSum = Math.max(this.maxPathSum, leftRootRight);
        return node.data + Math.max(left, right);
    }

    public static void main(String[] args) {
        // Create tree instance
        Tree tree = new Tree();

        /*
         * Tree 1
         * _______1
         * ______/_\
         * ____2____0
         * ___/_\____\
         * _4____1____3
         */

        // Tree Creation
        // Node root = new Node(1);
        // root.left = new Node(2);
        // root.left.left = new Node(4);
        // root.left.right = new Node(1);
        // root.right = new Node(0);
        // root.right.right = new Node(3);

        // Tree 2
        /*
         * ____-10
         * ____/_\
         * ___9___20
         * ______/__\
         * _____15___7
         */

        Node root = new Node(-10);
        root.left = new Node(9);
        root.right = new Node(20);
        root.right.left = new Node(15);
        root.right.right = new Node(7);

        // Log
        System.out.println(tree.levelOrder(root));

        // Max sum
        tree.maxSum(root);
        System.out.println(tree.maxPathSum);
    }
}
