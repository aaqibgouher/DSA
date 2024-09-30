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
    List<Integer> list = new ArrayList<>();

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

    public boolean rootToNode(Node node, int data) {
        if (node == null) {
            return false;
        }

        boolean isLeft = rootToNode(node.left, data);
        boolean isRight = rootToNode(node.right, data);

        if (node.data == data || (isLeft || isRight)) {
            list.add(node.data);

            return true;
        }

        return false;
    }

    public static void main(String[] args) {
        /*
         * _______1
         * ______/_\
         * _____2___3
         * ____/_\
         * ___4___5
         * ______/_\
         * _____6___7
         */

        // Tree creation
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.left.right.left = new Node(6);
        root.left.right.right = new Node(7);
        root.right = new Node(3);

        // Tree instance
        Tree tree = new Tree();

        // print
        tree.levelOrderV2(root);

        // This is my approach using postorder, we can do the same with inorder ref -
        // striver
        System.out.println(tree.list.reversed());
    }
}
