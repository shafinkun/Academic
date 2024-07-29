import java.util.Scanner;
public class Lab
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        for(int i = 0; i < 5; i++) 
        {
            double g, t, d;
            System.out.print("Input gravity(numbers only): ");;
            g = input.nextDouble();
            if(g < 0)
            {
                System.out.print("Gravity cannot be negative input again(numbers only) : ");
                g = input.nextDouble();
            }
            System.out.print("Input time: ");
            t = input.nextDouble();
            if(t < 0)
            {
                System.out.print("Time cannot be negetive, so time is : " + ((-1) * t));
            }
            d = .5 * g * t * t;
            System.out.println("Distance is : " + d);
        }
    }
}