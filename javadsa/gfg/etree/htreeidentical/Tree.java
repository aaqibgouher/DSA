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

    public boolean isIdentical(Node node1, Node node2) {
        if (node1 == null || node2 == null) {
            return node1 == node2;
        }

        boolean left = isIdentical(node1.left, node2.left);
        boolean right = isIdentical(node1.right, node2.right);

        return left && right && node1.data == node2.data;
    }

    public static void main(String[] args) {
        // Tree instance
        Tree tree = new Tree();

        // Tree creation
        /*
         * Case: Identical
         * 
         * Tree 1
         * 
         * _____1
         * ____2_3
         * ___4_5___
         * 
         * Tree 2
         * _____1
         * ____2_3
         * ___4_5___
         * 
         * Case: Unidentical
         * 
         * Tree 1
         * 
         * _____1
         * ____2_3
         * ___4_5__6
         * 
         * Tree 2
         * _____1
         * ____2_3
         * ___4_5___
         */

        Node root1 = new Node(1);
        root1.left = new Node(2);
        root1.left.left = new Node(4);
        root1.left.right = new Node(5);
        root1.right = new Node(3);

        Node root2 = new Node(1);
        root2.left = new Node(2);
        root2.left.left = new Node(4);
        root2.left.right = new Node(5);
        root2.right = new Node(3);

        // Printing tree
        System.out.println(tree.levelOrder(root1));
        System.out.println(tree.levelOrder(root2));

        // Check identical
        System.out.println(tree.isIdentical(root1, root2));
    }
}
