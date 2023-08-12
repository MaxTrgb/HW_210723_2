#include "Customer.h"
using namespace std;

// Constructor to initialize the Customer object with name, account number, and balance
Customer::Customer(const string& n, int acc, double bal)
    : name(n), account(acc), balance(bal) {}

// Method to get the customer's name
string Customer::getName() const {
    return name;
}

// Method to get the customer's account number
int Customer::getAccount() const {
    return account;
}

// Method to get the customer's account balance
double Customer::getBalance() const {
    return balance;
}

// Method to deposit an amount into the customer's account
void Customer::deposit(double amount) {
    balance += amount; // Increase the balance by the deposited amount
}

// Method to withdraw an amount from the customer's account
void Customer::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount; // Decrease the balance by the withdrawn amount
    }
    else {
        cout << "Insufficient balance for withdrawal." << endl; // Display an error message if balance is insufficient
    }
}
