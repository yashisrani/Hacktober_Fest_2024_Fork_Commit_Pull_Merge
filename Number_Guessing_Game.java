import java.util.Random;
import java.util.Scanner;

public class NumberGuessingGame {
    public static void main(String[] args) {
        // Create a Random object to generate random numbers
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);
        
        // Generate a random number between 1 and 100
        int randomNumber = random.nextInt(100) + 1;
        int guess = 0;
        int attempts = 0;
        
        System.out.println("Welcome to the Number Guessing Game!");
        System.out.println("I have selected a number between 1 and 100.");
        System.out.println("Try to guess the number!");

        // Loop until the correct guess
        while (guess != randomNumber) {
            // Prompt the player to enter their guess
            System.out.print("Enter your guess: ");
            guess = scanner.nextInt();
            attempts++;

            // Check if the guess is too high, too low, or correct
            if (guess < randomNumber) {
                System.out.println("Too low! Try again.");
            } else if (guess > randomNumber) {
                System.out.println("Too high! Try again.");
            } else {
                System.out.println("Congratulations! You guessed the number in " + attempts + " attempts.");
            }
        }

        // Close the scanner object
        scanner.close();
    }
}
