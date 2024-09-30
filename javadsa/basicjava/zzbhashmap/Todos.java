import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

interface TodosInterface {
    List<Map<String, Object>> getTodos();

    void addTodo(String todo, Boolean isCompleted);

    Map<String, Object> getTodoById(int index);

    Map<String, Object> updateTodoById(int index, String todo, Boolean isCompleted);

    void deleteTodoById(int index);
}

class Todos implements TodosInterface {
    List<Map<String, Object>> todos;

    public Todos() {
        this.todos = new ArrayList<Map<String, Object>>();
    }

    public List<Map<String, Object>> getTodos() {
        return this.todos;
    }

    public void addTodo(String todo, Boolean isCompleted) {
        Map<String, Object> todoMap = new HashMap<String, Object>();
        todoMap.put("todo", todo);
        todoMap.put("isCompleted", isCompleted);
        this.todos.add(todoMap);
    }

    public Map<String, Object> getTodoById(int index) {
        return this.todos.get(index);
    }

    public Map<String, Object> updateTodoById(int index, String todo, Boolean isCompleted) {
        try {
            Map<String, Object> todoMap = getTodoById(index);

            if (index < 0 || todoMap.size() < 0)
                throw new Exception("Index not found");

            todoMap.put("todo", todo);
            todoMap.put("isCompleted", isCompleted);

            this.todos.set(index, todoMap);

            return getTodoById(index);
        } catch (Exception error) {
            System.out.println(error.getMessage());
            return null;
        }
    }

    public void deleteTodoById(int index) {
        try {
            Map<String, Object> todoMap = getTodoById(index);

            if (todoMap.size() <= 0)
                throw new Exception("Todo not found by id");

            this.todos.remove(index);
        } catch (Exception error) {
            // return null;
        }
    }

    public static void main(String[] args) {
        Todos todoObj = new Todos();
        // System.out.println(todoObj.todos);

        // Add
        todoObj.addTodo("Complete maths", false);
        todoObj.addTodo("Go to market", true);
        todoObj.addTodo("Learn new skills", false);

        // Get
        System.out.println(todoObj.getTodos());

        // Find by id
        // System.out.println(todoObj.getTodoById(1));

        // Update
        System.out.println(todoObj.updateTodoById(0, "Completed maths updated", true));

        // delete
        todoObj.deleteTodoById(1);
        System.out.println(todoObj.todos);
    }
}