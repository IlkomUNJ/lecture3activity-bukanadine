#ifndef BANK_H
#define BANK_H

#include <vector>
#include <string>
#include "BankCustomer.h"

class Bank {
public:
    std::string name;
    std::vector<BankCustomer> accounts;

    Bank(const std::string& bankName) : name(bankName) {}

    void addAccount(const BankCustomer& customer) {
        accounts.push_back(customer);
    }
};

#endif