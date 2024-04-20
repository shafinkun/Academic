/* Problem statement:  Create a bank account. Create a class named 'BankAccount' with the following data members:
            1. Name of depositor 
            2. Address of depositor
            3. Type of account
            4. Balance in account
            5. Number of transactions 
        Class BankAccount has a method for each of the following:
                1. Generate a unique account number for each depositor.
                For first depositor, account number will be BAI000, for second depositor it will be BAIOO1 and so on
                2. Display information and balance of depositor 
                3. Deposit more amount in balance of any depositor
                4. Withdraw some amount from balance deposited
                5. Change address of depositor
        After creating the class, do the following operations:
                1. Enter the information (name, address, type of account, balance) of the depositors.
                Number of depositors are to be entered by user.
                2. Print the information of any depositor.
                3. Add some amount to the account of any depositor and then display final informaion Of that depositor
                4. Remove some amount from the account of any depositor and then display final informaion of that depositor
                5. Change the address of any depositor and then display the final information of that depositor
                6. Randomly repeat these processes for some other bank accounts and after that print the total number oftransactions.

    Solved by: Shahriar Hasnat Shafin Ahmed
 */
import java.util.Scanner;
class BankAccount
{
    String name;
    String address;
    String type;
    double balance;
    int transactions;
    static int count = 0;
    String accountNumber;
    BankAccount()
    {
        count++;
    }
    void generateAccountNumber()
    {
        accountNumber = "BAI" + String.format("%03d", count);
    }
    void getInfo()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the name of the depositor: ");
        name = sc.nextLine();
        System.out.print("Enter the address of the depositor: ");
        address = sc.nextLine();
        System.out.print("Enter the type of account: ");
        type = sc.nextLine();
        System.out.print("Enter the balance in account: ");
        balance = sc.nextDouble();
        transactions = 0;
    }
    void display()
    {
        System.out.println("Name of the depositor: " + name);
        System.out.println("Address of the depositor: " + address);
        System.out.println("Type of account: " + type);
        System.out.println("Balance in account: " + balance);
        System.out.println("Number of transactions: " + transactions);
        System.out.println("Account number: " + accountNumber);
    }
    void deposit()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the amount to be deposited: ");
        double amount = sc.nextDouble();
        balance += amount;
        transactions++;
    }
    void withdraw()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the amount to be withdrawn: ");
        double amount = sc.nextDouble();
        if (amount > balance)
        {
            System.out.println("Insufficient balance");
        }
        else
        {
            balance -= amount;
            transactions++;
        }
    }
    void changeAddress()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the new address of the depositor: ");
        address = sc.nextLine();
    }
}
public class Bank
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of depositors: ");
        int n = sc.nextInt();
        BankAccount[] obj = new BankAccount[n];
        for (int i = 0; i < n; i++)
        {
            obj[i] = new BankAccount();
            obj[i].generateAccountNumber();
            obj[i].getInfo();
        }
        System.out.print("Enter the account number of the depositor whose information is to be displayed: ");
        String acc = sc.next();
        for (int i = 0; i < n; i++)
        {
            if (obj[i].accountNumber.equals(acc))
            {
                obj[i].display();
            }
        }
        System.out.print("Enter the account number of the depositor in whose account amount is to be deposited: ");
        acc = sc.next();
        for (int i = 0; i < n; i++)
        {
            if (obj[i].accountNumber.equals(acc))
            {
                obj[i].deposit();
                obj[i].display();
            }
        }
        System.out.print("Enter the account number of the depositor from whose account amount is to be withdrawn: ");
        acc = sc.next();
        for (int i = 0; i < n; i++)
        {
            if (obj[i].accountNumber.equals(acc))
            {
                obj[i].withdraw();
                obj[i].display();
            }
        }
        System.out.print("Enter the account number of the depositor whose address is to be changed: ");
        acc = sc.next();
        for (int i = 0; i < n; i++)
        {
            if (obj[i].accountNumber.equals(acc))
            {
                obj[i].changeAddress();
                obj[i].display();
            }
        }
        int totalTransactions = 0;
        for (int i = 0; i < n; i++)
        {
            totalTransactions += obj[i].transactions;
        }
        System.out.println("Total number of transactions: " + totalTransactions);
    }
}