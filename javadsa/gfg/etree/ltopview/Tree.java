import java.util.ArrayList;
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

    class QueueNode {
        Node queueNode;
        Integer vertical, level;

        QueueNode(Node qNode, Integer vertical, Integer level) {
            this.queueNode = qNode;
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

    public void topView(Node node) {
        System.out.println("From top");
        Queue<QueueNode> queue = new LinkedList<>();
        TreeMap<Integer, List<Integer>> map = new TreeMap<>();

        // insert first node in the queue
        queue.add(new QueueNode(node, 0, 0));

        while (queue.isEmpty() != true) {
            // poll first element from queue
            QueueNode qNode = queue.poll();

            // check in map if exists
            if (!map.containsKey(qNode.vertical)) {
                map.put(qNode.vertical, new ArrayList<>());
            }

            // add into map for vertical
            System.out.println(map.get(qNode.vertical).size());
            if (map.get(qNode.vertical).size() < 1) {
                map.get(qNode.vertical).add(qNode.queueNode.data);
            }

            // check if left
            if (qNode.queueNode.left != null) {
                queue.add(new QueueNode(qNode.queueNode.left, qNode.vertical - 1, qNode.level + 1));
            }

            if (qNode.queueNode.right != null) {
                queue.add(new QueueNode(qNode.queueNode.right, qNode.vertical + 1, qNode.level + 1));
            }
        }

        System.out.println(map);
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
        root.left.right.left.left = new Node(8);
        root.left.right.left.left.left = new Node(9);
        root.right = new Node(3);
        root.right.right = new Node(6);

        // Tree instance
        Tree myTree = new Tree();

        // Level order
        myTree.levelOrderV2(root);
        System.out.println();

        // Top view
        myTree.topView(root);
    }
}
