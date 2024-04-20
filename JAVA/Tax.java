/* Problem statement: Write a Java Program to Calculate Taxes
        Using the double types, implement the following: 
        Suppose a product costs 9.99 net, calculate its gross value (we assume VAT of 23%).
        Then multiply it by 10,000 (i.e., we sold 10,000 pcs of this product), and calculate this value excluding VAT.
        Implement the above actions using the Big Decimal class. 
        Print on the console all computed values and compare their values. What conclusions do you have?
        
Solved by : Shahriar Hasnat Shafin Ahmed
*/

import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Scanner;
public class Tax {
    public static void main(String[] args) {
        
        // Read the net price of the product from the user
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the net price of the product: ");
        double netPrice = scanner.nextDouble();

        // Read the VAT rate from the user
        System.out.print("Enter the VAT rate (in decimal form): ");
        double vatRate = scanner.nextDouble();

        // Read the quantity of product pieces from the user
        System.out.print("Enter the quantity of product pieces: ");
        int quantity = scanner.nextInt();

        // Calculate the gross value including VAT
        double grossValue = netPrice * (1 + vatRate);

        // Calculate the value excluding VAT for the given quantity of product pieces
        double valueExcludingVat = grossValue * quantity;

        // Print the computed values
        System.out.println("Gross value including VAT: " + grossValue);
        System.out.println("Value excluding VAT for " + quantity + " pcs: " + valueExcludingVat);

    }
}