#ifndef BANK_CUSTOMER_H
#define BANK_CUSTOMER_H

#include <string>

class BankCustomer {
public:
    int id;
    std::string name;
    double balance;

    BankCustomer(int id, const std::string& name) : id(id), name(name), balance(0.0) {}

    std::string getName() const { return name; }
    double getBalance() const { return balance; }

    void setBalance(double amount) { balance = amount; }
    void sendBalance(double amount) { balance += amount; }
    
    void printInfo() const {
        // Implementation here
    }
};

#endif