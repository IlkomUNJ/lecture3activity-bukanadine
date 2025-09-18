#ifndef BUYER_H
#define BUYER_H

#include <string>
#include "BankCustomer.h"

class Buyer {
public:
    int id;
    std::string name;
    BankCustomer bankAccount;

    Buyer(int id, const std::string& name, int bankId, const std::string& bankName)
        : id(id), name(name), bankAccount(bankId, bankName) {}
        
    void makePurchase(double amount) {
        // Logic for making a purchase from a seller
    }
};

#endif