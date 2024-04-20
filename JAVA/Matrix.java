/* Problem statement: The Matrix class has methods for each of the following:
        1. Get the number of rows
        2. Get the number of columns
        3. Set the elements of the matrix at given position (i*j)
        4. Adding two matrices. If the mafrices are not addable, "Matrices cannot be added" will be displayed.
        5. Multiplying the two matrices
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

    int getRows()
    {
        return rows;
    }

    int getColumns()
    {
        return columns;
    }

    void setElement(int i, int j, int value)
    {
        matrix[i][j] = value;
    }

    void addMatrix(Matrix m1, Matrix m2)
    {
        if (m1.getRows() != m2.getRows() || m1.getColumns() != m2.getColumns())
        {
            System.out.println("Matrices cannot be added");
        }
        else
        {
            System.out.println("The sum of the two matrices is: ");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < columns; j++)
                {
                    matrix[i][j] = m1.matrix[i][j] + m2.matrix[i][j];
                    System.out.print(matrix[i][j] + "\t");
                }
                System.out.println();
            }
        }
    }

    void multiplyMatrix(Matrix m1, Matrix m2)
    {
        if (m1.getColumns() != m2.getRows())
        {
            System.out.println("Matrices cannot be multiplied");
        }
        else
        {
            System.out.println("The multiplication of the two matrices is: ");
            for (int i = 0; i < m1.getRows(); i++)
            {
                for (int j = 0; j < m2.getColumns(); j++)
                {
                    matrix[i][j] = 0;
                    for (int k = 0; k < m1.getColumns(); k++)
                    {
                        matrix[i][j] += m1.matrix[i][k] * m2.matrix[k][j];
                    }
                    System.out.print(matrix[i][j] + "\t");
                }
                System.out.println();
            }
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows of the first matrix: ");
        int r1 = sc.nextInt();
        System.out.print("Enter the number of columns of the first matrix: ");
        int c1 = sc.nextInt();

        Matrix obj1 = new Matrix(r1, c1);

        obj1.getElements();

        System.out.print("Enter the number of rows of the second matrix: ");
        int r2 = sc.nextInt();
        System.out.print("Enter the number of columns of the second matrix: ");
        int c2 = sc.nextInt();

        Matrix obj2 = new Matrix(r2, c2);
        obj2.getElements();
        
        Matrix obj3 = new Matrix(r1, c2);
        obj3.addMatrix(obj1, obj2);

        Matrix obj4 = new Matrix(r1, c2);
        obj4.multiplyMatrix(obj1, obj2);

    }
}