import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.TreeMap;

class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
        this.left = this.right = null;
    }
}

public class Tree {
    public static class QueueNode {
        Node queueNode;
        Integer vertical, level;

        QueueNode(Node node, Integer vertical, Integer level) {
            this.queueNode = node;
            this.vertical = vertical;
            this.level = level;
        }
    }

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

    public void verticalOrderTraversal(Node node) {
        Queue<QueueNode> queue = new LinkedList<>();
        TreeMap<Integer, List<Integer>> map = new TreeMap<>();

        System.out.println("from queue");

        // push into queue
        queue.add(new QueueNode(node, 0, 0));

        System.out.println(queue);
        System.out.println(map);

        while (queue.isEmpty() != true) {
            QueueNode qNode = queue.poll();
            System.out.println(qNode.queueNode.data + " " + qNode.vertical + " " + qNode.level);

            // Check in map if vertical exist or not, if exist, append in the list else
            // create key value
            if (!map.containsKey(qNode.vertical)) {
                map.put(qNode.vertical, new ArrayList<>());
            }

            // add into arraylist
            map.get(qNode.vertical).add(qNode.queueNode.data);

            // add left child
            if (qNode.queueNode.left != null) {
                queue.add(new QueueNode(qNode.queueNode.left, qNode.vertical - 1, qNode.level + 1));
            }

            // add right child
            if (qNode.queueNode.right != null) {
                queue.add(new QueueNode(qNode.queueNode.right, qNode.vertical + 1, qNode.level + 1));
            }
        }

        System.out.println(map);
    }

    public static void main(String[] args) {
        // Tree instance
        Tree tree = new Tree();

        // Tree creation
        /*
         * __________1
         * _________/_\
         * ________2___3
         * _______/\__/_\
         * _____4__5_6___7
         * _____\
         * ______8
         */
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.left.right = new Node(8);
        root.left.right = new Node(5);
        root.right = new Node(3);
        root.right.left = new Node(6);
        root.right.right = new Node(7);

        // Print
        tree.levelOrderV2(root);
        System.out.println();

        tree.verticalOrderTraversal(root);

    }
}
