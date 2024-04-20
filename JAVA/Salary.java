/* Problem statement: Write a program by creating an 'Employee' class having the following methods and print the final salary.
        1. which takes the salary, number of hours of work per day of employee as parameter
        2. 'AddSal()' which adds $10 to salary of the employee if it is less than $500.
        3. 'AddWork()' which adds $5 to salary of employee if the number of hours of work per day is more than 6 hours.

    Solved by: Shahriar Hasnat Shafin Ahmed
 */

import java.util.Scanner;

class Employee
{
    double salary;
    int hours;

    void getInfo()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the salary of the employee: ");
        salary = sc.nextDouble();
        System.out.print("Enter the number of hours of work per day of the employee: ");
        hours = sc.nextInt();
    }

    void AddSal()
    {
        if (salary < 500)
        {
            salary += 10;
        }
    }

    void AddWork()
    {
        if (hours > 6)
        {
            salary += 5;
        }
    }
    
    void display()
    {
        System.out.println("Final salary of the employee is: " + salary);
    }
}

public class Salary
{
    public static void main(String[] args)
    {
        Employee obj = new Employee();
        obj.getInfo();
        obj.AddSal();
        obj.AddWork();
        obj.display();
    }
}