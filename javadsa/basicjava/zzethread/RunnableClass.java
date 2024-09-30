public class RunnableClass implements Runnable {
    public void run() {
        System.out.println("Runnable thread ...");
    }

    public static void main(String[] args) {
        RunnableClass obj = new RunnableClass();
        Thread myThread = new Thread(obj);
        myThread.start();
    }
}
