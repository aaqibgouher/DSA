/**
 * PATTERN PROBLEM
 * https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
 * 
 */

public class Pattern {
    public void square() {
        int n = 4;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

        System.out.println();
    }

    public void trianle() {
        int n = 4;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

        System.out.println();
    }

    public void trianleV2() {
        int n = 4;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

        System.out.println();
    }

    public void pyriamidTriangle() {
        int n = 4;

        for (int i = 1; i <= n; i++) {
            // print space
            for (int j = 1; j <= n - i; j++) {
                System.out.print("  ");
            }

            // print star
            for (int k = 1; k <= 2 * i - 1; k++) {
                System.out.print("* ");
            }

            System.out.println();
        }

        System.out.println();
    }

    public void pyriamidTriangleInverted() {
        int n = 4;

        for (int i = n; i >= 1; i--) {
            // print space
            for (int j = 1; j <= n - i; j++) {
                System.out.print("  ");
            }

            // print star
            for (int k = 1; k <= 2 * i - 1; k++) {
                System.out.print("* ");
            }

            System.out.println();
        }

        System.out.println();
    }

    public void trianleZeroAndOne() {
        int n = 5;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                if ((i + j) % 2 == 0) {
                    System.out.print("1 ");
                } else {
                    System.out.print("0 ");
                }
            }
            System.out.println();
        }

        System.out.println();
    }

    public void trianleMirrorImage() {
        int n = 4;

        for (int i = 1; i <= n; i++) {
            // real
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }

            // space
            for (int k = 1; k <= 2 * n - 2 * i; k++) {
                System.out.print("  ");
            }

            // virtual
            for (int count = i; count >= 1; count--) {
                System.out.print(count + " ");
            }

            System.out.println();
        }

        System.out.println();
    }

    public void characterTrianle() {
        int n = 4;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print((char) ('A' + j - 1) + " ");
            }

            System.out.println();
        }

        System.out.println();
    }

    public void traingleKiteV2() {
        int n = 5;

        // UPPER HALF
        for (int i = 1; i <= n; i++) {
            // star
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print("* ");
            }

            // space
            for (int k = 1; k <= 2 * i - 2; k++) {
                System.out.print("  ");
            }

            // star
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print("* ");
            }

            System.out.println();
        }

        // LOWER HALF
        for (int i = 1; i <= n; i++) {
            // star
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }

            // space
            for (int k = 1; k <= 2 * n - 2 * i; k++) {
                System.out.print("  ");
            }

            // star
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }

            System.out.println();
        }

        System.out.println();
    }

    public void spiralSquare() {
        int n = 4;

        for (int i = 0; i < 2 * n - 1; i++) {
            for (int j = 0; j < 2 * n - 1; j++) {
                int top = i;
                int left = j;
                int bottom = (2 * n - 2) - i;
                int right = (2 * n - 2) - j;

                System.out.print(n - Math.min(Math.min(top, bottom), Math.min(left, right)) + " ");
            }

            System.out.println();
        }
    }

    public static void main(String[] args) {
        // Pattern instance
        Pattern pattern = new Pattern();

        // 1. Square Pattern
        // n = 4
        // * * * *
        // * * * *
        // * * * *
        // * * * *
        pattern.square();

        // 2. Trianle Pattern
        // n = 4
        // *
        // * *
        // * * *
        // * * * *
        pattern.trianle();

        // 5. Triangle Pattern 2
        // n = 4
        // * * * *
        // * * *
        // * *
        // *
        pattern.trianleV2();

        // 7. Pyramid Trianle Pattern 3
        // n = 4
        // _ _ _ *
        // _ _ * * *
        // _ * * * * *
        // * * * * * * *
        pattern.pyriamidTriangle();

        // 8. Pyramid Triangle Pattern 3
        // n = 3
        // * * * * *
        // _ * * *
        // _ _ *
        pattern.pyriamidTriangleInverted();

        // 11. 0 & 1 Trianle
        // n = 5
        // 1
        // 0 1
        // 1 0 1
        // 0 1 0 1
        // 1 0 1 0 1
        pattern.trianleZeroAndOne();

        // 12. Mirror image
        // n = 4
        // 1 _ _ _ _ _ _ 1
        // 1 2 _ _ _ _ 2 1
        // 1 2 3 _ _ 3 2 1
        // 1 2 3 4 4 3 2 1
        pattern.trianleMirrorImage();

        // 14. Character triangle
        // n = 4
        // A
        // A B
        // A B C
        // A B C D
        pattern.characterTrianle();

        // 19. Triangle V3
        // n = 5
        // * * * * * * * * * *
        // * * * * _ _ * * * *
        // * * * _ _ _ _ * * *
        // * * _ _ _ _ _ _ * *
        // * _ _ _ _ _ _ _ _ *
        // * * _ _ _ _ _ _ * *
        // * * * _ _ _ _ * * *
        // * * * * _ _ * * * *
        // * * * * * * * * * *
        //
        pattern.traingleKiteV2();

        // 22. Spiral Square
        // n = 4
        // 4 4 4 4 4 4 4
        // 4 3 3 3 3 3 4
        // 4 3 2 2 2 3 4
        // 4 3 2 1 2 3 4
        // 4 3 2 2 2 3 4
        // 4 3 3 3 3 3 4
        // 4 4 4 4 4 4 4
        pattern.spiralSquare();

    }
}
