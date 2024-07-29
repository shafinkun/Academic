import java.util.Scanner;
public class Lab2 {
	public static void main(String args[]) {
    	Scanner sc = new Scanner(System.in);
    	for(int i = 0; i < 5; ++i)
    	{
			Employee emp = new Employee();

			System.out.print("Name of the employee: ");
			emp.name = sc.nextLine();
			System.out.print("Age of the employee: ");
			emp.age = sc.nextInt();
			sc.nextLine();
			System.out.print("Number of the employee: ");
			emp.num = sc.nextLong();
			sc.nextLine();
			System.out.print("Address of the employee: ");
			emp.address = sc.nextLine();
			System.out.print("Salary of the employee: ");
			emp.salary = sc.nextDouble();
			sc.nextLine();
			System.out.print("Spacialization of the employee: ");
			emp.specialization = sc.nextLine();

			System.out.println("Employee's name: " + emp.name);
			System.out.println("Employee's age: " + emp.age);
			System.out.println("Employee's number: +880" + emp.num);
			System.out.println("Employee's address: " + emp.address);
			System.out.println("Employee's specialized in " + emp.specialization);
			emp.getSalary();
    			
    		Manager man = new Manager();
    		System.out.print("Name of the Manager: ");
    		man.name = sc.nextLine();
    		System.out.print("Age of the Manager: ");
    		man.age = sc.nextInt();
			sc.nextLine();
    		System.out.print("Number of the Manager: +880");
    		man.num = sc.nextLong();
			sc.nextLine();
    		System.out.print("Address of the Manager: ");
    		man.address = sc.nextLine();
    		System.out.print("Salary of the Manager: ");
    		man.salary = sc.nextDouble();
			sc.nextLine();
    		System.out.print("Department of the Manager: ");
    		man.department = sc.nextLine();
    		
    		System.out.println("Manager's name: " + man.name);
    		System.out.println("Manager's age: " + man.age);
    		System.out.println("Manager's number: " + man.num);
    		System.out.println("Manager's address: " + man.address);
    		System.out.println("Manager's is in " + man.department + " department");
    		man.getSalary();
    	}
    }
    
}
class Member
{
	String name;
	int age;
	long num;
	String address;
	double salary;
	
	void getSalary()
	{
		System.out.println("Salary of " + name + " : " + salary);
	}
}
class Employee extends Member
{
	String specialization;
}
class Manager extends Member
{
	String department;
}