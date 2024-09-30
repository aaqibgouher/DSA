public class ThreadClass extends Thread {
    public void run() {
        System.out.println("Thread is running ...");
    }

    public static void main(String[] args) {
        ThreadClass myThread = new ThreadClass();
        myThread.start();
    }
}
