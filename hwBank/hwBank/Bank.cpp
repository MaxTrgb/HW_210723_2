#include "Bank.h"
#include <iostream>
using namespace std;

// Constructor to initialize the Bank object with a name
Bank::Bank(const string& name) : bankName(name), totalBalance(0.0) {}

// Method to add a new customer to the bank
void Bank::addCustomer(const Customer& customer) {
    customers.push_back(customer);       // Add the customer to the vector
    totalBalance += customer.getBalance(); // Update the total bank balance
}

// Method to remove a customer based on their account number
void Bank::removeCustomer(int account) {
    for (auto it = customers.begin(); it != customers.end(); ++it) {
        if (it->getAccount() == account) {
            totalBalance -= it->getBalance(); // Subtract the customer's balance from the total
            customers.erase(it);              // Remove the customer from the vector
            break;
        }
    }
}

// Method to deposit an amount into a customer's account
void Bank::deposit(int account, double amount) {
    for (auto& customer : customers) {
        if (customer.getAccount() == account) {
            customer.deposit(amount);        // Call the deposit method of the Customer class
            totalBalance += amount;          // Update the total bank balance
            break;
        }
    }
}

// Method to withdraw an amount from a customer's account
void Bank::withdraw(int account, double amount) {
    for (auto& customer : customers) {
        if (customer.getAccount() == account) {
            customer.withdraw(amount);       // Call the withdraw method of the Customer class
            totalBalance -= amount;          // Update the total bank balance
            break;
        }
    }
}

// Method to display details of all customers in the bank
void Bank::displayCustomers() const {
    cout << "\nBank Name: " << bankName << endl;
    cout << "Total Bank Balance: " << totalBalance << endl;
    cout << "Customer Details:" << endl;

    // Loop through each customer and display their details
    for (const auto& customer : customers) {
        cout << "Name: " << customer.getName() << ", Account: " << customer.getAccount()
            << ", Balance: " << customer.getBalance() << endl;
    }
}
