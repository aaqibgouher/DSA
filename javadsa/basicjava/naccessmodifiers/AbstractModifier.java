abstract class Student {
    public String name;
    public String email;
    public int amount;

    public abstract void getDetails();
}

class Rahul extends Student {
    public Rahul(String name, String email, int amount) {
        this.name = name;
        this.email = email;
        this.amount = amount;
    }

    public void getDetails() {
        System.out.println("Name: " + this.name + ", Email: " + this.email + ", & Amount: " + this.amount);
    }
}

class AbstractModifier {
    public static void main(String[] args) {
        Rahul obj = new Rahul("Rahul", "rahul@gmail.com", 100);
        obj.getDetails();
    }
}