/*Problem statement: Create a class called 'Matrix' containing constructor that initializes the number of rows and number of columns of a new Matrix object.
 The Matrix class has the following information:
        1. Number of rows of matrix
        2. Number of columns of matrix
        3. Elements of matrix in the form of 2D array

    Solved by: Shahriar Hasnat Shafin Ahmed
 */
import java.util.Scanner;
public class Matrix
{
    int rows;
    int columns;
    int[][] matrix;
    Matrix(int r, int c)
    {
        rows = r;
        columns = c;
        matrix = new int[rows][columns];
    }
    void getElements()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the elements of the matrix: ");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                matrix[i][j] = sc.nextInt();
            }
        }
    }
    void display()
    {
        System.out.println("The elements of the matrix are: ");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows of the matrix: ");
        int r = sc.nextInt();
        System.out.print("Enter the number of columns of the matrix: ");
        int c = sc.nextInt();
        Matrix obj = new Matrix(r, c);
        obj.getElements();
        obj.display();
    }
}