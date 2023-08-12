#pragma once

#include <string>
#include <vector>
#include "Customer.h"

using namespace std;

class Bank {
private:
    string bankName;         // Field to store the bank's name
    vector<Customer> customers; // Vector to store customer objects
    double totalBalance;     // Field to store the total bank balance

public:
    // Constructor to initialize the Bank object with a name
    Bank(const string& name);

    // Method to add a new customer to the bank
    void addCustomer(const Customer& customer);

    // Method to remove a customer based on their account number
    void removeCustomer(int account);

    // Method to deposit an amount into a customer's account
    void deposit(int account, double amount);

    // Method to withdraw an amount from a customer's account
    void withdraw(int account, double amount);

    // Method to display details of all customers in the bank
    void displayCustomers() const;
};
