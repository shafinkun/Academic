import java.util.Scanner;

/* Problem Statement: Create a Java program that calculates the average of a list
            of numbers entered by the user. The program should repeatedly prompt
            the user to enter numbers until the user decides to stop entering numbers.

    Solved by: Shahriar Hasnat Shafin Ahmed
 */
public class Avg {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int sum = 0;
        int count = 0;

        System.out.println("Enter numbers (enter -1 to stop):");

        while (true) {
            int number = scanner.nextInt();

            if (number == -1) {
                break;
            }

            sum += number;
            count++;
        }

        if (count > 0) {
            double average = (double) sum / count;
            System.out.println("Average: " + average);
        } else {
            System.out.println("No numbers entered.");
        }

    }
}