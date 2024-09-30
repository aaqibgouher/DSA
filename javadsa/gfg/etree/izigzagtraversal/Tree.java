import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
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
        Boolean flag = true;

        // add first node
        queue.add(node);

        while (queue.isEmpty() != true) {
            int len = queue.size();
            List<Integer> list = new ArrayList<>();

            for (int i = 1; i <= len; i++) {
                Node curr = queue.poll();

                if (curr.right != null) {
                    queue.add(curr.right);
                }

                if (curr.left != null) {
                    queue.add(curr.left);
                }

                list.add(curr.data);
            }

            if (flag) {
                Collections.reverse(list);
            }

            tree.add(list);

            flag = !flag;
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
         * _____1
         * ____2_3
         * ___4_5___
         * 
         */

        Node root1 = new Node(1);
        root1.left = new Node(2);
        root1.left.left = new Node(4);
        root1.left.right = new Node(5);
        root1.right = new Node(3);
        root1.right.right = new Node(6);

        // Printing tree
        System.out.println(tree.levelOrder(root1));
    }
}
