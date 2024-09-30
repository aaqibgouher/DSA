import java.util.HashSet;
import java.util.Set;

interface HashsetInterface {
    Set<String> getNames();

    void addName(String name);

    Boolean isNameExists(String name);

    void removeName(String name);

    int getSize();
}

public class HashsetClass {
    Set<String> names;

    public HashsetClass() {
        this.names = new HashSet<String>();
    }

    public Set<String> getNames() {
        return this.names;
    }

    public void addName(String name) {
        this.names.add(name);
    }

    public Boolean isNameExists(String name) {
        return this.names.contains(name);
    }

    public void removeName(String name) {
        this.names.remove(name);
    }

    public int getSize() {
        return this.names.size();
    }

    public static void main(String[] args) {
        HashsetClass setObj = new HashsetClass();

        // get names
        System.out.println(setObj.getNames());

        // add name
        setObj.addName("Audi");
        setObj.addName("Mercedez");
        setObj.addName("Alto");
        setObj.addName("Alto");
        setObj.addName("Audi");

        // get names
        System.out.println(setObj.getNames());

        // if name exist
        System.out.println(setObj.isNameExists("Audii"));

        // delete name
        setObj.removeName("Audi");
        System.out.println(setObj.getNames());

        // size
        System.out.println(setObj.getSize());

        // loop through set
        Set<String> mySet = setObj.getNames();
        for (String name : mySet) {
            System.out.print(name + " ");
        }
    }
}
