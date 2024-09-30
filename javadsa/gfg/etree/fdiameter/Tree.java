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
    int max = 0;

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

    public int maxDebth(Node node) {
        if (node == null) {
            return 0;
        }

        int left = maxDebth(node.left);
        int right = maxDebth(node.right);

        return 1 + Math.max(left, right);
    }

    public void diameter(Node node) {
        if (node == null) {
            return;
        }

        int left = maxDebth(node.left);
        int right = maxDebth(node.right);

        this.max = Math.max(this.max, left + right);

        diameter(node.left);
        diameter(node.right);
    }

    public int diameterV2(Node node) {
        if (node == null) {
            return 0;
        }

        int left = diameterV2(node.left);
        int right = diameterV2(node.right);

        this.max = Math.max(this.max, left + right);

        return 1 + Math.max(left, right);
    }

    public static void main(String[] args) {
        /*
         * _____1
         * ____/_\
         * ___2___3
         * __/_\___\
         * _4___5___6
         * ________/_\
         * _______7___8
         */

        // Tree Creation
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right = new Node(3);
        root.right.right = new Node(6);
        root.right.right.left = new Node(7);
        root.right.right.right = new Node(8);

        // Tree instance creation
        Tree tree = new Tree();
        System.out.println(tree.levelOrder(root));

        // Diameter
        // tree.diameter(root);
        // System.out.println(tree.max);

        // Diamtere V2
        System.out.println(tree.diameterV2(root) + " Debth");
        System.out.println(tree.max + " Maxi");
    }
}