public class Main {
    /**
     * @param args
     */
    public static void main(String[] args) {
        String firstName = "John";
        String lastName = "Doe";

        // 1. String length
        System.out.println(firstName.length());

        // 2. Find char in string
        System.out.println(firstName.indexOf('D'));

        // 3. Concate strings
        System.out.println(firstName + lastName);
        System.out.println(firstName.concat(lastName));
    }
}
