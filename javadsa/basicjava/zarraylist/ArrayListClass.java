import java.util.ArrayList;

interface ArrayListInterface {
    void add(int num);

    ArrayList<Integer> get();

    void update(int index, int num);

    void delete(int index);

    int findById(int index);

    int getSize();
}

class ArrayListClass implements ArrayListInterface {
    ArrayList<Integer> nums;

    public ArrayListClass() {
        this.nums = new ArrayList<Integer>();
    }

    public ArrayList<Integer> get() {
        return this.nums;
    }

    public void add(int num) {
        this.nums.add(num);
    }

    public void update(int index, int num) {
        this.nums.set(index, num);
    }

    public void delete(int index) {
        this.nums.remove(index);
    }

    public int findById(int index) {
        return this.nums.get(index);
    }

    public int getSize() {
        return this.nums.size();
    }
}