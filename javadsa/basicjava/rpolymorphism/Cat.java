public class Cat {
    public void say() {
        System.out.println("Car say Meaw Meaw ...");
    }

    public static void main(String[] args) {
        Animal animalObj = new Animal();
        Cat catObj = new Cat();

        animalObj.say();
        catObj.say();
    }
}
