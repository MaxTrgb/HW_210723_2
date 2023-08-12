#pragma once
#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    string name;    
    int account;     
    double balance;  

public:
    // Constructor to initialize the Customer object with name, account number, and balance
    Customer(const string& n, int acc, double bal);

    // Method to get the customer's name
    string getName() const;

    // Method to get the customer's account number
    int getAccount() const;

    // Method to get the customer's account balance
    double getBalance() const;

    // Method to deposit an amount into the customer's account
    void deposit(double amount);

    // Method to withdraw an amount from the customer's account
    void withdraw(double amount);
};
