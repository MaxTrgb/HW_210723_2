#include "Bank.h"
#include <iostream>
using namespace std;

int main() {
    Bank bank("MyBank"); // Create a Bank object named "MyBank"

    while (true) {
        //Menu
        cout << "\n1. Add Customer\n";
        cout << "2. Remove Customer\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Display Customers\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice; // Read user's choice

        switch (choice) {
        case 1: { // Add Customer
            string name;
            int account;
            double balance;

            cout << "\nEnter customer name: ";
            cin.ignore(); // Clear input buffer
            getline(cin, name); // Read the whole line including spaces

            cout << "Enter account number: ";
            cin >> account;

            cout << "Enter initial balance: ";
            cin >> balance;

            Customer newCustomer(name, account, balance); // Create a new Customer object
            bank.addCustomer(newCustomer); // Add the new customer to the bank

            cout << "\nCustomer added successfully!\n";
            break;
        }
        case 2: { // Remove Customer
            int account;
            cout << "\nEnter account number of customer to remove: ";
            cin >> account;

            bank.removeCustomer(account); // Remove the customer with the specified account

            cout << "\nCustomer removed successfully!\n";
            break;
        }
        case 3: { // Deposit
            int account;
            double amount;
            cout << "\nEnter account number: ";
            cin >> account;

            cout << "Enter amount to deposit: ";
            cin >> amount;

            bank.deposit(account, amount); // Deposit the specified amount to the customer's account

            cout << "\nAmount deposited successfully!\n";
            break;
        }
        case 4: { // Withdraw
            int account;
            double amount;
            cout << "\nEnter account number: ";
            cin >> account;

            cout << "Enter amount to withdraw: ";
            cin >> amount;

            bank.withdraw(account, amount); // Withdraw the specified amount from the customer's account

            cout << "\nAmount withdrawn successfully!\n";
            break;
        }
        case 5: // Display Customers
            bank.displayCustomers(); // Display details of all customers in the bank
            break;
        case 6: // Exit
            cout << "\nExiting...\n";
            return 0; // Terminate the program
        default:
            cout << "\nInvalid choice. Please try again.\n";
        }
    }

    return 0;
}
