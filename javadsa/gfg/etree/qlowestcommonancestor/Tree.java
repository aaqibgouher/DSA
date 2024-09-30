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

    public boolean findPath(Node root, int data, List<Integer> arr) {
        if (root == null) {
            return false;
        }

        // Add the current node's data to the path
        arr.add(root.data);

        // If the current node is the target node, return true
        if (root.data == data) {
            return true;
        }

        // Recursively check in left and right subtrees
        if (findPath(root.left, data, arr) || findPath(root.right, data, arr)) {
            return true;
        }

        // If the target node is not found in either subtree, remove the current node
        // from the path
        arr.remove(arr.size() - 1);
        return false;
    }

    public List<Integer> nodeToRoot(Node root, int data) {
        List<Integer> arr = new ArrayList<>();
        if (findPath(root, data, arr)) {
            return arr;
        }
        return new ArrayList<>(); // return an empty list if the node is not found
    }

    public int lca(Node root, int first, int second) {
        List<Integer> path1 = nodeToRoot(root, first);
        List<Integer> path2 = nodeToRoot(root, second);

        int last = 0;

        for (int i = 0; i < path1.size(); i++) {
            if (path1.get(i) == path2.get(i)) {
                last = path1.get(i);
            } else {
                break;
            }
        }

        return last;
    }

    public Node lcaV2(Node root, int left, int right) {
        if (root == null || root.data == left || root.data == right) {
            return root;
        }

        Node leftNode = lcaV2(root.left, left, right);
        Node rightNode = lcaV2(root.right, left, right);

        if (leftNode == null) {
            return rightNode;
        } else if (rightNode == null) {
            return leftNode;
        } else {
            return root;
        }
    }

    public static void main(String[] args) {
        /*
         * __________1
         * _________2_3
         * _______4_5__8_9
         * ________/_\
         * _______6___7
         */

        // Tree creation
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.left.right.left = new Node(6);
        root.left.right.right = new Node(7);
        root.right = new Node(3);
        root.right.left = new Node(8);
        root.right.right = new Node(9);

        // Creating tree instance
        Tree tree = new Tree();

        // print
        tree.levelOrderV2(root);
        System.out.println();

        // Lowest common ancestor
        System.out.println(tree.lca(root, 4, 7));
        System.out.println(tree.lcaV2(root, 4, 7).data);
    }
}
