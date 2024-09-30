import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
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
        Node qNode;
        int vertex;

        QueueNode(Node qNode, int vertex) {
            this.qNode = qNode;
            this.vertex = vertex;
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

    public void bottomView(Node node) {
        Queue<QueueNode> queue = new LinkedList<>();
        TreeMap<Integer, List<Integer>> map = new TreeMap<>();
        List<Integer> bottom = new ArrayList<>();

        // push first to queue
        queue.add(new QueueNode(node, 0));

        while (queue.isEmpty() != true) {
            QueueNode queueNode = queue.poll();

            if (!map.containsKey(queueNode.vertex)) {
                map.put(queueNode.vertex, new ArrayList<>());
            }

            map.get(queueNode.vertex).add(queueNode.qNode.data);

            if (queueNode.qNode.left != null) {
                queue.add(new QueueNode(queueNode.qNode.left, queueNode.vertex - 1));
            }

            if (queueNode.qNode.right != null) {
                queue.add(new QueueNode(queueNode.qNode.right, queueNode.vertex + 1));
            }
        }

        System.out.println(map);
        for (Map.Entry<Integer, List<Integer>> entry : map.entrySet()) {
            Integer key = entry.getKey();
            List<Integer> value = entry.getValue();

            bottom.add(value.get(value.size() - 1));
        }

        System.out.println(bottom);
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
        Tree tree = new Tree();

        // Level order
        tree.levelOrderV2(root);
        System.out.println();

        // Bottom view
        tree.bottomView(root);
    }
}
