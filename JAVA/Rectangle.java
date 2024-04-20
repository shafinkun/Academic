/* Problem statement:	Java Program to Calculate the Area of a Rectangle using OOP as follows instructions:
                        You need to create two classes
                            1. RectangleArea: For the logic of your program and
                            2. Main class: In the Main class, we create the RectangleArea object and call three methods on it.
                        The methods you should create are:
                            getData() gets side lengths from the
                            computeField(), performs   fieldDisplay(), displays info and result.
* Solved by : Shahriar Hasnat Shafin Ahmed
 */
import java.util.Scanner;
class RectangleArea
{
    double length;
    double breadth;
    void getData()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of the rectangle: ");
        length = sc.nextDouble();
        System.out.print("Enter the breadth of the rectangle: ");
        breadth = sc.nextDouble();
    }
    void computeField()
    {
        double area = length * breadth;
        fieldDisplay(area);
    }
    void fieldDisplay(double area)
    {
        System.out.println("Area of the rectangle is: " + area);
    }
    
}
public class Rectangle
{
    public static void main(String[] args)
    {
        RectangleArea obj = new RectangleArea();
        obj.getData();
        obj.computeField();
    }
}