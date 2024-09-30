import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Stack;

class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

public class IterativeTree {
    public void preOrderIterative(Node root) {
        Stack<Node> stack = new Stack<Node>();
        stack.push(root);

        while (!stack.empty()) {
            Node node = stack.peek();
            stack.pop();

            System.out.print(node.data + " ");

            if (node.right != null) {
                stack.push(node.right);
            }

            if (node.left != null) {
                stack.push(node.left);
            }
        }
    }

    public List<Integer> inOrderIterative(Node root) {
        List<Integer> arr = new ArrayList<Integer>();
        Stack<Node> stack = new Stack<Node>();

        Node node = root;

        while (true) {
            if (node != null) {
                stack.push(node);
                node = node.left;
            } else {
                if (stack.isEmpty()) {
                    break;
                }

                node = stack.pop();
                arr.add(node.data);
                node = node.right;
            }
        }

        return arr;
    }

    public void postorderIterativeTwoStack(Node root) {
        List<Integer> arr = new ArrayList<Integer>();
        Stack<Node> st1 = new Stack<Node>();
        Stack<Node> st2 = new Stack<Node>();

        st1.push(root);

        while (!st1.empty()) {
            root = st1.pop();
            st2.push(root);

            if (root.left != null) {
                st1.push(root.left);
            }

            if (root.right != null) {
                st1.push(root.right);
            }
        }

        while (!st2.empty()) {
            Node top = st2.pop();
            arr.add(top.data);
        }

        System.out.println(arr);
    }

    public static void main(String[] args) {
        IterativeTree tree = new IterativeTree();

        // Create a BT
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right = new Node(3);
        root.right.right = new Node(6);

        // Iterative
        tree.preOrderIterative(root);

        System.out.println();

        System.out.println(tree.inOrderIterative(root));
    }
}
