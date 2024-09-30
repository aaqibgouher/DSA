import java.util.HashMap;

interface UserInterface {
    void add(String key, Object value);

    HashMap<String, Object> get();
}

public class HashmapClass {
    HashMap<String, Object> user;

    public HashmapClass() {
        this.user = new HashMap<String, Object>();
    }

    public void add(String key, Object value) {
        this.user.put(key, value);
    }

    public HashMap<String, Object> get() {
        return this.user;
    }

    public static void main(String[] args) {
        HashmapClass obj = new HashmapClass();

        // Add key & value
        obj.add("name", "Aaqib");
        obj.add("amount", 1000);
        obj.add("flag", true);

        // log object
        System.out.println(obj.get());
    }
}
