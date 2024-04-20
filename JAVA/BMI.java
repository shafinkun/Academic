/*  Problem Statement: Calculate BMI Using Java
The user enters his height (in inches) and weight (in pounds). 
The variables passed by the user are assigned to the float type.
After calculating the BMI value, the value will be assigned to the appropriate range 
and the correct message will appear on the console. 
You can use the if-else-if ladder for printing the message on the console.
Intervals of BMI index:
 	16.00 or less = starvation
 	16.00-16.99 = emaciation
 	17.00-18.49 = underweight
 	18.50-22.99 = normal, low range
 	23.00-24.99 = normal high range
 	25.00-27.49 = overweight low range
 	27.50-29.99 = overweight high range
 	30.00-34.99 = 1st degree obesity
 	35.00-39.99 = 2nd degree obesity
 	40.00 or above = 3rd degree obesity
Solved by: Shahriar Hasnat Shafin Ahmed
 */
import java.util.Scanner;
public class BMI {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your height in inches: ");
        float height = scanner.nextFloat();

        System.out.print("Enter your weight in pounds: ");
        float weight = scanner.nextFloat();

        float bmi = (weight / (height * height)) * 703;

        String message;
        if (bmi <= 16.00) {
            message = "Starvation";
        } else if (bmi <= 16.99) {
            message = "Emaciation";
        } else if (bmi <= 18.49) {
            message = "Underweight";
        } else if (bmi <= 22.99) {
            message = "Normal, low range";
        } else if (bmi <= 24.99) {
            message = "Normal high range";
        } else if (bmi <= 27.49) {
            message = "Overweight low range";
        } else if (bmi <= 29.99) {
            message = "Overweight high range";
        } else if (bmi <= 34.99) {
            message = "1st degree obesity";
        } else if (bmi <= 39.99) {
            message = "2nd degree obesity";
        } else {
            message = "3rd degree obesity";
        }

        System.out.println("Your BMI is: " + bmi);
        System.out.println("BMI Range: " + message);
    }
}