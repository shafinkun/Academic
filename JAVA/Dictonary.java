/* Problem Statement: Write a program to create a directory that contains the following information:
            (a)	Name of a person
            (b)	Address
            (c)	Telephone Number (if available with STD code)
            (d)	Mobile Number (if available) 
            (e) Head of the family 
            (f) Unique ID No.
        The program will support the following menu based activities:
            (a)	Create a database entry (The Unique ID number must be unique for every entry,
                the telephone numbers of two or more persons can be same if and only if the head of family is same)
            (b)	Edit an entry (Must be identified by only the Unique ID number)
            (c)	Search by keyword (Any keyword may not be complete; even if the keyword matches partially with any field,
                the corresponding information must be displayed)

    Solved by: Shahriar Hasnat Shafin Ahmed
 */
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Dictionary {
    private static Map<String, Person> database = new HashMap<>();
    private static int uniqueIdCounter = 1;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean exit = false;

        while (!exit) {
            System.out.println("Menu:");
            System.out.println("1. Create a database entry");
            System.out.println("2. Edit an entry");
            System.out.println("3. Search by keyword");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    createEntry(scanner);
                    break;
                case 2:
                    editEntry(scanner);
                    break;
                case 3:
                    searchByKeyword(scanner);
                    break;
                case 4:
                    exit = true;
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }

    private static void createEntry(Scanner scanner) {
        System.out.print("Enter name: ");
        String name = scanner.nextLine();

        System.out.print("Enter address: ");
        String address = scanner.nextLine();

        System.out.print("Enter telephone number (if available with STD code): ");
        String telephoneNumber = scanner.nextLine();

        System.out.print("Enter mobile number (if available): ");
        String mobileNumber = scanner.nextLine();
        
        System.out.print("Enter head of the family: ");
        String headOfFamily = scanner.nextLine();

        String uniqueId = generateUniqueId();
        Person person = new Person(name, address, telephoneNumber, mobileNumber, headOfFamily);
        database.put(uniqueId, person);

        System.out.println("Entry created successfully. Unique ID: " + uniqueId);
    }

    private static void editEntry(Scanner scanner) {
        System.out.print("Enter unique ID of the entry to edit: ");
        String uniqueId = scanner.nextLine();

        if (database.containsKey(uniqueId)) {
            Person person = database.get(uniqueId);

            System.out.println("Current information:");
            System.out.println("Name: " + person.getName());
            System.out.println("Address: " + person.getAddress());
            System.out.println("Telephone Number: " + person.getTelephoneNumber());
            System.out.println("Mobile Number: " + person.getMobileNumber());
            System.out.println("Head of the Family: " + person.getHeadOfFamily());

            System.out.println("Enter new information:");

            System.out.print("Name: ");
            String name = scanner.nextLine();
            person.setName(name);

            System.out.print("Address: ");
            String address = scanner.nextLine();
            person.setAddress(address);

            System.out.print("Telephone Number: ");
            String telephoneNumber = scanner.nextLine();
            person.setTelephoneNumber(telephoneNumber);

            System.out.print("Mobile Number: ");
            String mobileNumber = scanner.nextLine();
            person.setMobileNumber(mobileNumber);

            System.out.print("Head of the Family: ");
            String headOfFamily = scanner.nextLine();
            person.setHeadOfFamily(headOfFamily);

            System.out.println("Entry updated successfully.");
        } else {
            System.out.println("Entry not found with unique ID: " + uniqueId);
        }
    }

    private static void searchByKeyword(Scanner scanner) {
        System.out.print("Enter keyword to search: ");
        String keyword = scanner.nextLine();

        List<Person> searchResults = new ArrayList<>();

        for (Person person : database.values()) {
            if (person.getName().contains(keyword) || person.getAddress().contains(keyword) ||
                    person.getTelephoneNumber().contains(keyword) || person.getMobileNumber().contains(keyword) ||
                    person.getHeadOfFamily().contains(keyword)) {
                searchResults.add(person);
            }
        }

        if (searchResults.isEmpty()) {
            System.out.println("No matching entries found.");
        } else {
            System.out.println("Matching entries:");
            for (Person person : searchResults) {
                System.out.println("Unique ID: " + person.getUniqueId());
                System.out.println("Name: " + person.getName());
                System.out.println("Address: " + person.getAddress());
                System.out.println("Telephone Number: " + person.getTelephoneNumber());
                System.out.println("Mobile Number: " + person.getMobileNumber());
                System.out.println("Head of the Family: " + person.getHeadOfFamily());
                System.out.println();
            }
        }
    }

    private static String generateUniqueId() {
        return String.valueOf(uniqueIdCounter++);
    }

    private static class Person {
        private String name;
        private String address;
        private String telephoneNumber;
        private String mobileNumber;
        private String headOfFamily;

        public Person(String name, String address, String telephoneNumber, String mobileNumber, String headOfFamily) {
            this.name = name;
            this.address = address;
            this.telephoneNumber = telephoneNumber;
            this.mobileNumber = mobileNumber;
            this.headOfFamily = headOfFamily;
        }

        public String getName() {
            return name;
        }

        public void setName(String name) {
            this.name = name;
        }

        public String getAddress() {
            return address;
        }

        public void setAddress(String address) {
            this.address = address;
        }

        public String getTelephoneNumber() {
            return telephoneNumber;
        }

        public void setTelephoneNumber(String telephoneNumber) {
            this.telephoneNumber = telephoneNumber;
        }

        public String getMobileNumber() {
            return mobileNumber;
        }

        public void setMobileNumber(String mobileNumber) {
            this.mobileNumber = mobileNumber;
        }

        public String getHeadOfFamily() {
            return headOfFamily;
        }

        public void setHeadOfFamily(String headOfFamily) {
            this.headOfFamily = headOfFamily;
        }

        public String getUniqueId() {
            for (Map.Entry<String, Person> entry : database.entrySet()) {
                if (entry.getValue() == this) {
                    return entry.getKey();
                }
            }
            return null;
        }
    }
}