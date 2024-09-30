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
    int max = -1;
    int sum = Integer.MIN_VALUE;

    public void preOrder(Node node) {
        if (node == null) {
            return;
        }

        System.out.print(node.data + " ");
        preOrder(node.left);
        preOrder(node.right);
    }

    public void inOrder(Node node) {
        if (node == null) {
            return;
        }

        inOrder(node.left);
        System.out.print(node.data + " ");
        inOrder(node.right);
    }

    public void postOrder(Node node) {
        if (node == null) {
            return;
        }

        postOrder(node.left);
        postOrder(node.right);
        System.out.print(node.data + " ");
    }

    public void levelOrderV1(Node node) {
        Queue<Node> queue = new LinkedList<>();

        queue.add(node);

        while (queue.isEmpty() != true) {
            Node curr = queue.poll();

            System.out.print(curr.data + " ");

            if (curr.left != null) {
                queue.add(curr.left);
            }

            if (curr.right != null) {
                queue.add(curr.right);
            }
        }
    }

    public void levelOrderV2(Node node) {
        List<List<Integer>> arr = new ArrayList<>();
        Queue<Node> queue = new LinkedList<>();

        queue.add(node);
        while (queue.isEmpty() != true) {
            List<Integer> innerArr = new ArrayList<>();
            int len = queue.size();

            for (int i = 1; i <= len; i++) {
                Node curr = queue.poll();

                if (curr.left != null) {
                    queue.add(curr.left);
                }

                if (curr.right != null) {
                    queue.add(curr.right);
                }

                innerArr.add(curr.data);
            }

            arr.add(innerArr);
        }

        System.out.println(arr);
    }

    public int maxDebth(Node node) {
        if (node == null) {
            return 0;
        }

        int left = maxDebth(node.left);
        int right = maxDebth(node.right);

        return 1 + Math.max(left, right);
    }

    public boolean isBalanced(Node node) {
        if (node == null) {
            return true;
        }

        int left = maxDebth(node.left);
        int right = maxDebth(node.right);

        if (Math.abs(left - right) <= 1 && isBalanced(node.left) && isBalanced(node.right)) {
            return true;
        } else {
            return false;
        }
    }

    // O(n^2) approach)
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

    // 0(n) approach
    public int diameterV2(Node node) {
        if (node == null) {
            return 0;
        }

        int left = diameterV2(node.left);
        int right = diameterV2(node.right);

        this.max = Math.max(this.max, left + right);

        return 1 + Math.max(left, right);
    }

    public int maxSum(Node node) {
        if (node == null) {
            return 0;
        }

        int left = maxSum(node.left);
        int right = maxSum(node.right);
        int leftRootRight = left + node.data + right;

        this.sum = Math.max(this.sum, leftRootRight);
        return node.data + Math.max(left, right);
    }

    public boolean isIdentical(Node node1, Node node2) {
        if (node1 == null || node2 == null) {
            return node1 == node2;
        }

        boolean left = isIdentical(node1.left, node2.left);
        boolean right = isIdentical(node1.right, node2.right);

        return left && right && node1.data == node2.data;
    }

    public void zigZagTraversal(Node node) {
        List<List<Integer>> arr = new ArrayList<>();
        Queue<Node> queue = new LinkedList<>();
        boolean flag = false;

        queue.add(node);

        while (queue.isEmpty() != true) {
            int size = queue.size();
            List<Integer> innerArr = new ArrayList<>();

            for (int i = 1; i <= size; i++) {
                Node curr = queue.poll();

                if (curr.left != null) {
                    queue.add(curr.left);
                }

                if (curr.right != null) {
                    queue.add(curr.right);
                }

                innerArr.add(curr.data);
            }

            if (flag) {
                Collections.reverse(innerArr);
            }

            arr.add(innerArr);
            flag = !flag;
        }

        System.out.println(arr);
    }

    public static void main(String[] args) {
        // Tree instance
        Tree tree = new Tree();

        // Tree creation
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.left.right.left = new Node(7);
        root.left.right.left.left = new Node(9);
        root.right = new Node(3);
        root.right.right = new Node(6);

        // 1. Traversal
        // Preorder
        tree.preOrder(root);
        System.out.println();

        // Inorder
        tree.inOrder(root);
        System.out.println();

        // Postorder
        tree.postOrder(root);
        System.out.println();

        // levelOrderV1
        tree.levelOrderV1(root);
        System.out.println();

        // levelOrderV2
        tree.levelOrderV2(root);
        System.out.println();

        // Max Debth
        System.out.println("Max debth: " + tree.maxDebth(root));
        System.out.println("Balanced: " + tree.isBalanced(root));
        // tree.diameter(root);
        // System.out.println("Diameter: " + tree.max);
        tree.diameterV2(root);
        System.out.println("Diameter: " + tree.max);

        // Max Path Sum
        tree.maxSum(root);
        System.out.println("Max Path Sum: " + tree.sum);

        /*
         * Case 1: Identical
         * Tree 1
         * _____1
         * ____/_\
         * ___2___3
         * __/_\
         * _4___5
         * 
         * Tree 2
         * _____1
         * ____/_\
         * ___2___3
         * __/_\
         * _4___5
         * 
         * Case 2: Different
         * Tree 1
         * _____1
         * ____/_\
         * ___2___3
         * __/_\
         * _4___5
         * 
         * Tree 2
         * _____1
         * ____/_\
         * ___2___3
         * __/_\
         * _4___6
         * 
         */

        Node root1 = new Node(1);
        root1.left = new Node(2);
        root1.left.left = new Node(4);
        root1.left.right = new Node(6);
        root1.right = new Node(3);

        Node root2 = new Node(1);
        root2.left = new Node(2);
        root2.left.left = new Node(4);
        root2.left.right = new Node(6);
        root2.right = new Node(4);

        // Tree Identical
        System.out.println("Identical: " + tree.isIdentical(root1, root2));

        // Zig Zag Traversal
        tree.zigZagTraversal(root);
    }
}