/*
 * Find number of islands in the graph. An island is one which is surrounded by water.
 * 0 - water
 * 1 - land
 * 
 * Eg: 
 * 0 1 1 0
 * 0 1 1 0
 * 0 0 1 0
 * 0 0 0 0
 * 1 1 0 1
 * 
 * In the above graph, we have three islands. First one with 5 land, 2nd one with 2 land & 3rd one with 1 land. Here we just need to 
 * return the count of islands
 *
 * 
 */

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

class Pair {
    int x, y;

    public Pair(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

public class Graph {
    public void print(int graphMatrix[][], int n, int m) {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                System.out.print(graphMatrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    public void bfs(int graphMatrix[][], int x, int y, int n, int m, boolean visitedArr[][]) {
        Queue<Pair> queue = new LinkedList<Pair>();
        ArrayList<Pair> bfsMatrixArr = new ArrayList<Pair>();

        // adding first element in the query & mark visited
        queue.add(new Pair(x, y));
        visitedArr[x][y] = true;

        while (!queue.isEmpty()) {
            Pair curr = queue.poll();

            // All 8 neighbours:
            /*
             * - (x-1, y)
             * - (x-1, y+1)
             * - (x, y+1)
             * - (x+1, y+1)
             * - (x+1, y)
             * - (x+1, y-1)
             * - (x, y-1)
             * - (x+1, y-1)
             * 
             * 0 <= i <= n & 0 <= j <= m
             */
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    int xOrdinate = curr.x + i;
                    int yOrdinate = curr.y + j;

                    if (xOrdinate >= 0 && xOrdinate <= n && yOrdinate >= 0 && yOrdinate <= m
                            && graphMatrix[xOrdinate][yOrdinate] == 1 && visitedArr[xOrdinate][yOrdinate] == false) {
                        queue.add(new Pair(xOrdinate, yOrdinate));
                        visitedArr[xOrdinate][yOrdinate] = true;
                    }
                }
            }

            bfsMatrixArr.add(curr);
        }
    }

    public int islandsCount(int graphMatrix[][], int n, int m) {
        boolean visitedArr[][] = new boolean[n + 1][m + 1];
        int count = 0;

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (graphMatrix[i][j] == 1 && visitedArr[i][j] == false) {
                    bfs(graphMatrix, i, j, n, m, visitedArr);
                    count++;
                }
            }
        }

        return count;
    }

    public static void main(String[] args) {
        int n = 5, m = 5;
        int graphMatrix[][] = new int[n + 1][m + 1];

        // 1 - 2, 1 - 3
        graphMatrix[1][2] = 1;
        graphMatrix[1][3] = 1;

        // 2 - 2, 2 - 3
        graphMatrix[2][2] = 1;
        graphMatrix[2][3] = 1;

        // 3 - 3
        graphMatrix[3][3] = 1;

        // 5 - 1, 5 - 2, 5 - 4
        graphMatrix[5][1] = 1;
        graphMatrix[5][2] = 1;
        graphMatrix[5][4] = 1;

        // Graph instance
        Graph graphObj = new Graph();

        graphObj.print(graphMatrix, n, m);

        // No of islands
        System.out.println("No. of islands: " + graphObj.islandsCount(graphMatrix, n, m));
    }
}
