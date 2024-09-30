public class ThreadConcurrency extends Thread {
    public static int amount = 0;

    public void run() {
        this.amount++;
    }

    public static void main(String[] args) {
        ThreadConcurrency thread1 = new ThreadConcurrency();
        thread1.start();

        // Handle concurrency by waiting
        while (thread1.isAlive()) {
            System.out.println("Waiting ...");
        }

        System.out.println("Before: " + amount);
        amount++;

        System.out.println("After: " + amount);
    }
}
