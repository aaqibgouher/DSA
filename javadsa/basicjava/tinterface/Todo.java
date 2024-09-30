import java.util.ArrayList;
import java.util.List;

interface TodoInterface {
    void create(String todo);

    List<String> list();

    void delete(int index);

    void update(int index, String updatedTodo);
}

class Todo implements TodoInterface {
    public List<String> todos;

    public Todo() {
        this.todos = new ArrayList<>();
    }

    public void create(String todo) {
        this.todos.add(todo);
    }

    public List<String> list() {
        return this.todos;
    }

    public void delete(int index) {
        this.todos.remove(index);
    }

    public void update(int index, String updatedTodo) {
        this.todos.set(index, updatedTodo);
    }
}