import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class Main {
    public static void main(String[] args) {
        // 1. date
        LocalDate date = LocalDate.now();
        System.out.println(date);

        // 2. time (current)
        LocalTime time = LocalTime.now();
        System.out.println(time);

        // 3. datetime
        LocalDateTime datetime = LocalDateTime.now();
        System.out.println(datetime);

        // 4. formatting datetime
        DateTimeFormatter dateFormatter = DateTimeFormatter.ofPattern("E, MMM dd yyyy HH:mm:ss");
        String dateFormat = datetime.format(dateFormatter);
        System.out.println(dateFormat);
    }
}
