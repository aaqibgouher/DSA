/*
 * FIND CYCLE IN THE UNDIRECTED GRAPH
 * https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph
 * 
 * Given an undirected graph with V vertices labelled from 0 to V-1 and E edges, check whether the graph contains any cycle or not. The Graph is represented as an adjacency list, where adj[i] contains all the vertices that are directly connected to vertex i.

NOTE: The adjacency list represents undirected edges, meaning that if there is an edge between vertex i and vertex j, both j will be adj[i] and i will be in adj[j].

    1
   /__\
   3___2
  /_\___\
 4___6___5
 _____\__/
 _______7

 Output: 1
 */

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

class Pair {
    int node, parent;

    Pair(int x, int y) {
        this.node = x;
        this.parent = y;
    }
}

public class Graph {
    public boolean isCycle(ArrayList<ArrayList<Integer>> graph, int n, int initial) {
        Queue<Pair> queue = new LinkedList<>();
        boolean[] visitedArr = new boolean[n + 1];

        // adding to the queue
        queue.add(new Pair(initial, -1));
        visitedArr[initial] = true;

        while (!queue.isEmpty()) {
            Pair curr = queue.poll();

            // get neighbours
            ArrayList<Integer> neighbours = graph.get(curr.node);

            // loop over each neighbours & if not visited add to the queue & mark visited
            for (int i = 0; i < neighbours.size(); i++) {
                int neibour = neighbours.get(i);

                if (!visitedArr[neibour]) {
                    queue.add(new Pair(neibour, curr.node));
                    visitedArr[neibour] = true;
                } else if (neibour != curr.parent) {
                    return true;
                }
            }
        }

        return false;
    }

    public boolean isCycleDfs(ArrayList<ArrayList<Integer>> graph, int node, int parent, int n, boolean[] visitedArr) {
        visitedArr[node] = true;

        // get neighbours
        ArrayList<Integer> neighbours = graph.get(node);

        System.out.println(node + " " + parent);
        System.out.println(neighbours);
        for (int i = 0; i < neighbours.size(); i++) {
            int neibour = neighbours.get(i);

            if (!visitedArr[neibour]) {
                if (isCycleDfs(graph, neibour, node, n, visitedArr)) {
                    return true;
                }
            } else if (neibour != parent) {
                return true;
            }
        }

        return false;
    }

    public boolean dfsHandler(ArrayList<ArrayList<Integer>> graph, int initial, int n) {
        boolean[] visitedArr = new boolean[n + 1];

        return isCycleDfs(graph, initial, -1, n, visitedArr);
    }

    public static void main(String[] args) {
        // Instance
        Graph graph = new Graph();

        // Graph creation
        ArrayList<ArrayList<Integer>> graphList = new ArrayList<>();
        int n = 7, initial = 1;

        // initialise graph with empty list
        for (int i = 0; i <= n; i++) {
            graphList.add(new ArrayList<>());
        }

        // 1 - 3, 1 - 2
        graphList.get(1).add(2);
        graphList.get(1).add(3);

        // 3 - 1, 3 - 4, 3 - 6
        graphList.get(3).add(1);
        graphList.get(3).add(4);
        graphList.get(3).add(6);

        // 2 - 1, 2 - 5
        graphList.get(2).add(1);
        graphList.get(2).add(5);

        // 4 - 3
        graphList.get(4).add(3);

        // 6 - 3, 6 - 7
        graphList.get(6).add(3);
        graphList.get(6).add(7);

        // 5 - 2, 5 - 7
        graphList.get(5).add(2);
        graphList.get(5).add(7);

        // 7 - 6, 7 - 5
        graphList.get(7).add(5);
        graphList.get(7).add(6);

        // print
        System.out.println("------ GRAPH ------");
        System.out.println(graphList);

        // detech cycle
        System.out.println("\n_______ CYCLE ________");

        System.out.println("\n_______ BFS Approach ________");
        System.out.println(graph.isCycle(graphList, n, initial));

        System.out.println("\n_______ DFS Approach ________");
        System.out.println(graph.dfsHandler(graphList, initial, n));
    }
}
