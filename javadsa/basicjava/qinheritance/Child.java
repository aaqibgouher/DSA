class Child extends Parent {
    public String name;

    public Child(String name) {
        this.name = name;
    }

    public static void main(String[] args) {
        Child ch1 = new Child("Aaqib");
        ch1.getDetails();
    }
}