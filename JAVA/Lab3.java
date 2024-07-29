import java.util.Scanner;
public class Lab3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int check = 1;

        while(check == 1)
        {
            int total, gain;
            System.out.print("Enter total marks : ");
            total = sc.nextInt();
            sc.nextLine();
            
            while(total <= 0)
            {
                System.out.print("Total marks must be positive and greater than 0.");
                System.out.print("Enter total marks : ");
                total = sc.nextInt();
                sc.nextLine();
            }
            
            System.out.print("Enter obtained marks: ");
            gain = sc.nextInt();
            sc.nextLine();
            
            while(gain < 0)
            {
                System.out.print("Obtained marks must be positive!");
                System.out.print("Enter Obtained marks : ");
                gain = sc.nextInt();
                sc.nextLine();
            }
            
            while(gain > total)
            {
                System.out.print("Total makes must be greater or equal to Obtained marks!");
                System.out.print("Enter total marks : ");
                total = sc.nextInt();
                sc.nextLine();
                System.out.print("Enter obtained marks: ");
                gain = sc.nextInt();
                sc.nextLine();
                
            }


            int converted = (gain * 100) / total;

            if(converted >= 0 && converted < 50)
                System.out.println("Grade is: F");
            else if(converted >= 50 && converted < 60)
                System.out.println("Grade is: D");
            else if(converted >= 60 && converted < 70)
                System.out.println("Grade is: C");
            else if(converted >= 70 && converted < 80)
                System.out.println("Grade is: B");
            else if(converted >= 80 && converted <= 100)
                System.out.println("Grade is: A");
            else
                System.out.println("Invalid input!");

            
            System.out.print("Do you want to continue? (1/0) : ");
            check = sc.nextInt();
            sc.nextLine();
        }

        
    }
}
