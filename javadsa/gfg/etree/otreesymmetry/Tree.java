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
    public void levelOrderV2(Node node) {
        if (node == null) {
            return;
        }

        // Creating array list of list
        List<List<Integer>> list = new ArrayList<>();

        // create a queue
        Queue<Node> queue = new LinkedList<Node>();
        queue.add(node);

        while (!queue.isEmpty()) {
            int levelSize = queue.size();

            List<Integer> levelList = new ArrayList<>();

            for (int i = 0; i < levelSize; i++) {
                Node curr = queue.poll();

                levelList.add(curr.data);

                if (curr.left != null) {
                    queue.add(curr.left);
                }

                if (curr.right != null) {
                    queue.add(curr.right);
                }
            }

            list.add(levelList);
        }

        System.out.println(list);
    }

    public boolean isSymmetry(Node leftNode, Node rightNode) {
        if (leftNode == null || rightNode == null) {
            return leftNode == rightNode;
        }

        if (leftNode.data != rightNode.data) {
            return false;
        }

        return isSymmetry(leftNode.left, rightNode.right) && isSymmetry(leftNode.right, rightNode.left);
    }

    public static void main(String[] args) {
        // Tree creation
        /*
         * ______1
         * ______/_\
         * _____2___2
         * ___/_\___/_\
         * __3__4__4___3
         */

        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(3);
        root.left.right = new Node(4);
        root.right = new Node(2);
        root.right.left = new Node(4);
        root.right.right = new Node(5);

        // Tree Instance
        Tree tree = new Tree();

        // print
        tree.levelOrderV2(root);
        System.out.println();

        // Check symmetry
        System.out.println(tree.isSymmetry(root.left, root.right));
    }
}
