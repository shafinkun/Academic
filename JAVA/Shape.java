import java.util.Scanner;

/* Problem Statement: Create a class named 'Rectangle' with two data members 'length' and 'breadth' and 
            two methods to print the area and perimeter of the rectangle respectively.
            Its constructor having parameters for length and breadth is used to initialize length
            and breadth of the rectangle. 
        Let class 'Square' inherit the 'Rectangle' class with its constructor having a parameter for its 
        side (suppose s) calling the constructor of its parent class as  Print the area and perimeter of
        a rectangle and a square.
    Now repeat the above example to print the area of 10 squares.
    Create a class named 'Shape' with a method to print "This is This is shape". 
    Then create two other classes named Rectangle', 'Circle' inheriting the Shape class, both having
    a method to print "This is rectangular shape" and "This is circular shape" respectively.
    Create a subclass 'Square' of Rectangle' having a method to print "Square is a rectangle".
    Now call the method of 'Shape' and 'Rectangle' class by the object of 'Square' class.

    Solve by: Shahriar Hasnat Shafin Ahmed
*/
class Rectangle {
    private double length;
    private double breadth;

    public Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double getArea() {
        return length * breadth;
    }

    public double getPerimeter() {
        return 2 * (length + breadth);
    }
}

class Square extends Rectangle {
    public Square(double side) {
        super(side, side);
    }

    public void printSquareInfo() {
        System.out.println("Square is a rectangle");
    }
}

class Shape {
    public void printShapeInfo() {
        System.out.println("This is a shape");
    }
}

class Circle extends Shape {
    public void printCircleInfo() {
        System.out.println("This is a circular shape");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the length of the rectangle: ");
        double length = scanner.nextDouble();

        System.out.print("Enter the breadth of the rectangle: ");
        double breadth = scanner.nextDouble();

        Rectangle rectangle = new Rectangle(length, breadth);
        System.out.println("Area of the rectangle: " + rectangle.getArea());
        System.out.println("Perimeter of the rectangle: " + rectangle.getPerimeter());

        System.out.print("Enter the side of the square: ");
        double side = scanner.nextDouble();

        Square square = new Square(side);
        System.out.println("Area of the square: " + square.getArea());
        System.out.println("Perimeter of the square: " + square.getPerimeter());
        square.printSquareInfo();

        Shape shape = new Shape();
        shape.printShapeInfo();

        Circle circle = new Circle();
        circle.printCircleInfo();

        scanner.close();
    }
}