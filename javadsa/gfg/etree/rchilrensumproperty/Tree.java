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

class Tree {
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

    public static int childrenSum(Node node) {
        if (node.left == null || node.right == null) {
            return 0;
        }

        if (node.left.data + node.right.data <= node.data) {
            node.left.data = node.data;
            node.right.data = node.data;
        }

        int left = childrenSum(node.left);
        int right = childrenSum(node.right);

        System.out.println(node.data + " left = " + left + " , right = " + right);

        if (node.left == null && node.right == null) {
            return node.data;
        } else {
            node.data = left + right;
            return left + right;
        }
    }

    public static void main(String[] args) {
        /*
         * _________40
         * ________/__\
         * ______10____20
         * _____/_\____/_\
         * ____2___5__30__40
         */

        // Tree instance
        Tree tree = new Tree();

        // Tree creation
        Node root = new Node(40);
        root.left = new Node(10);
        root.left.left = new Node(2);
        root.left.right = new Node(5);
        root.right = new Node(20);
        root.right.left = new Node(30);
        root.right.right = new Node(40);

        // Print tree
        tree.levelOrderV2(root);
        System.out.println();

        // Children sum property
        System.out.println(tree.childrenSum(root));

        tree.levelOrderV2(root);
        System.out.println();
    }
}