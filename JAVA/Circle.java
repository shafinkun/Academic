/* Problem statement: Write a Java program to find the circumference and area of a circle with a given radius.
* Solved by : Shahriar Hasnat Shafin Ahmed
 */
import java.util.*;
public class circle
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius of the circle: ");
        double r = sc.nextDouble();
        double circumference = 2 * Math.PI * r;
        double area = Math.PI * r * r;
        System.out.println("Circumference of the circle is: " + circumference);
        System.out.println("Area of the circle is: " + area);
    }
}