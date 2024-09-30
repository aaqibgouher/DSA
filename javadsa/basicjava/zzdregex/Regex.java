import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Regex {
    public static void main(String[] args) {
        // Define the regex pattern for email validation
        String emailRegex = "^[a-zA-Z0-9_+&*-]+(?:\\.[a-zA-Z0-9_+&*-]+)*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,7}$";

        // Compile the regex pattern
        Pattern pattern = Pattern.compile(emailRegex);

        // Test strings to validate as email addresses
        String[] emails = {
                "user@example.com",
                "user123@gmail.com",
                "user.name@domain.com",
                "user123@sub.domain.co.in",
                "user"
        };

        // Iterate over each email string and validate
        for (String email : emails) {
            // Create a matcher for the current email string
            Matcher matcher = pattern.matcher(email);

            System.out.println(email + " = " + matcher.matches());
        }
    }
}
