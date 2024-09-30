public class FinalModifier {
    final int marks;

    public void updateMarks(int marks) {
        this.marks = marks; // we will get error here
    }

    public int getMarks() {
        return this.marks;
    }
}
