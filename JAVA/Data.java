import java.util.Scanner;

/* Problem Statement: Create a class named 'Member' having the following members:
                Data members
                    1. Name
                    2. Age
                    3. Phone number
                    4. Address
                    5. Salary
            It also has a method named 'printSalary' which prints the salary of the members.
            Two classes 'Employee' and 'Manager' inherits the 'Member' class.
            The 'Employee' and 'Manager' classes have data members 'specialization' and 'department' respectively. 
        Now, assign name, age, phone number, address and salary to an employee and a manager by making an object
        of both of these classes and print the same.

    Solved by: Shahriar Hasnat Shafin Ahmed
 */
class Member {
    String name;
    int age;
    String phoneNumber;
    String address;
    double salary;

    void printSalary() {
        System.out.println("Salary: " + salary);
    }
}

class Employee extends Member {
    String specialization;
}

class Manager extends Member {
    String department;
}

public class Data {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Employee employee = new Employee();

        System.out.print("Enter employee name: ");
        employee.name = scanner.nextLine();

        System.out.print("Enter employee age: ");
        employee.age = scanner.nextInt();
        scanner.nextLine(); 

        System.out.print("Enter employee phone number: ");
        employee.phoneNumber = scanner.nextLine();

        System.out.print("Enter employee address: ");
        employee.address = scanner.nextLine();

        System.out.print("Enter employee salary: ");
        employee.salary = scanner.nextDouble();

        System.out.print("Enter employee specialization: ");
        employee.specialization = scanner.next();

        Manager manager = new Manager();

        System.out.print("Enter manager name: ");
        manager.name = scanner.nextLine();

        System.out.print("Enter manager age: ");
        manager.age = scanner.nextInt();
        scanner.nextLine(); 

        System.out.print("Enter manager phone number: ");
        manager.phoneNumber = scanner.nextLine();

        System.out.print("Enter manager address: ");
        manager.address = scanner.nextLine();

        System.out.print("Enter manager salary: ");
        manager.salary = scanner.nextDouble();

        System.out.print("Enter manager department: ");
        manager.department = scanner.next();

        System.out.println("\nEmployee Details:");
        System.out.println("Name: " + employee.name);
        System.out.println("Age: " + employee.age);
        System.out.println("Phone Number: " + employee.phoneNumber);
        System.out.println("Address: " + employee.address);
        System.out.println("Salary: " + employee.salary);
        System.out.println("Specialization: " + employee.specialization);

        System.out.println("\nManager Details:");
        System.out.println("Name: " + manager.name);
        System.out.println("Age: " + manager.age);
        System.out.println("Phone Number: " + manager.phoneNumber);
        System.out.println("Address: " + manager.address);
        System.out.println("Salary: " + manager.salary);
        System.out.println("Department: " + manager.department);
    }
}