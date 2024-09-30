import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Stack;

class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
        this.left = this.right = null;
    }
}

public class Tree {
    Stack<Node> stack = new Stack<Node>();
    Stack<Node> rightStack = new Stack<Node>();

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

    public void leafNodes(Node node) {
        if (node == null) {
            return;
        }

        if (node.left == null && node.right == null) {
            stack.push(node);
            return;
        }

        leafNodes(node.left);
        leafNodes(node.right);
    }

    public void leftBoundaryExceptLeaf(Node node) {
        if (node == null || (node.left == null && node.right == null)) {
            return;
        }

        stack.push(node);

        if (node.left != null) {
            leftBoundaryExceptLeaf(node.left);
        } else {
            leftBoundaryExceptLeaf(node.right);
        }
    }

    public void rightBoundaryExceptLeaf(Node node) {
        if (node == null || (node.left == null && node.right == null)) {
            return;
        }

        rightStack.push(node);

        if (node.right != null) {
            rightBoundaryExceptLeaf(node.right);
        } else {
            rightBoundaryExceptLeaf(node.left);
        }
    }

    public void printStack(Stack<Node> st) {
        for (int i = 0; i < st.size(); i++) {
            System.out.println(st.get(i).data);
        }
    }

    public void boundaryTraversal(Node node) {
        if (node == null) {
            return;
        }

        // Add the root node
        stack.push(node);

        // Add the left boundary excluding leaf nodes
        if (node.left != null) {
            leftBoundaryExceptLeaf(node.left);
        }

        // Add leaf nodes
        leafNodes(node);

        // Add the right boundary excluding leaf nodes and root node
        if (node.right != null) {
            rightBoundaryExceptLeaf(node.right);
        }

        // Pop elements from rightStack and push to stack
        while (!rightStack.isEmpty()) {
            stack.push(rightStack.pop());
        }
    }

    public static void main(String[] args) {
        // Tree instance
        Tree tree = new Tree();

        // Tree creation
        /*
         * _________1
         * ________2_3
         * _______4___5
         * ________6_7
         */

        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.left.right = new Node(6);
        root.right = new Node(3);
        root.right.right = new Node(5);
        root.right.right.left = new Node(7);

        // Level order print
        tree.levelOrderV2(root);
        System.out.println();

        // Boundary traversal
        tree.boundaryTraversal(root);
        System.out.println();

        // Print stack
        tree.printStack(tree.stack);
    }
}
