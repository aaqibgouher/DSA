public class QueueArraya {
    int[] queue;
    int front;
    int rear;
    int max;
    int size;

    public QueueArraya(int max) {
        this.queue = new int[max];
        this.front = 0;
        this.rear = -1;
        this.max = max;
        this.size = 0;
    }

    public void enqueue(int data) {
        // If queue is full, then show error, else add
        if (isFull() == true) {
            System.out.println("Queue is full");
            return;
        }

        this.rear++;
        this.queue[this.rear] = data;
        this.size++;
    }

    public void dequeue() {
        // if queue is empty, then err else dequeue
        if (isEmpty() == true) {
            System.out.println("Queue is empty");
            return;
        }

        this.rear--;
        this.size--;
    }

    public int peak() {
        return this.queue[this.size - 1];
    }

    public Boolean isFull() {
        if (this.rear == max - 1) {
            return true;
        } else {
            return false;
        }
    }

    public Boolean isEmpty() {
        if (this.rear == -1) {
            return true;
        } else {
            return false;
        }
    }

    public void print() {
        for (int i = 0; i < this.size; i++) {
            System.out.print(this.queue[i] + " ");
        }

        System.out.println();
    }

    public static void main(String[] args) {
        QueueArraya que = new QueueArraya(5);

        // Enqueue
        que.enqueue(1);
        que.enqueue(2);
        que.enqueue(3);
        que.enqueue(4);
        que.enqueue(5);

        // print
        que.print();

        // dequeu
        que.dequeue();
        que.print();

        // peak
        System.out.println(que.peak());
    }
}
