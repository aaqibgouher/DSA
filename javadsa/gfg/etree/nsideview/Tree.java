import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
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
    class TreeView {
        List<Integer> leftView;
        List<Integer> rightView;

        TreeView(List<Integer> leftView, List<Integer> rightView) {
            this.leftView = leftView;
            this.rightView = rightView;
        }
    }

    public TreeView sideView(Node root) {
        // For left view, just take first element & right view take last element
        Queue<Node> queue = new LinkedList<>();
        List<List<Integer>> levelArr = new ArrayList<>();
        List<Integer> leftView = new ArrayList<>();
        List<Integer> rightView = new ArrayList<>();

        queue.add(root);

        while (queue.isEmpty() != true) {
            int queueLen = queue.size();
            List<Integer> list = new ArrayList<>();

            for (int i = 1; i <= queueLen; i++) {
                Node node = queue.poll();

                if (node.left != null) {
                    queue.add(node.left);
                }

                if (node.right != null) {
                    queue.add(node.right);
                }

                list.add(node.data);
            }

            // Left view
            leftView.add(list.get(0));

            // Right view
            rightView.add(list.get(list.size() - 1));
        }

        return new TreeView(leftView, rightView);
    }

    public static void main(String[] args) {
        // Tree creation
        /*
         * _________1
         * ________/_\
         * _______2___3
         * _____/__\___\
         * ____4____5___6
         * ________/
         * _______7
         * ______/
         * ____8
         * ___/
         * __9
         * 
         */

        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.left.right.left = new Node(7);
        root.right = new Node(3);
        root.right.right = new Node(6);

        // Tree instance
        Tree tree = new Tree();
        TreeView treeView = tree.sideView(root);

        // Side view
        System.out.println(treeView.leftView);
        System.out.println(treeView.rightView);
    }
}
