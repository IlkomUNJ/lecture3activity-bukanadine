#ifndef SELLER_H
#define SELLER_H

#include <vector>
#include <string>
#include "Item.h"
#include "BankCustomer.h"

class Seller {
public:
    int id;
    std::string name;
    std::string bankAccountId;
    BankCustomer bankCustomer;
    std::vector<Item> stock;

    Seller(int id, const std::string& name, const std::string& bankAccountId, int bankId, const std::string& bankName)
        : id(id), name(name), bankAccountId(bankAccountId), bankCustomer(bankId, bankName) {}
        
    void addItem(const Item& item) {
        stock.push_back(item);
    }

    void updateItem(int itemId, const std::string& newName, int newQuantity, double newPrice) {
        for (auto& item : stock) {
            if (item.id == itemId) {
                item.change(newName, newQuantity, newPrice);
                return;
            }
        }
    }
    
    void withdrawMoney(double amount) {
        // Logic for interacting with BankCustomer
    }
    
    void depositMoney(double amount) {
        // Logic for interacting with BankCustomer
    }
    
    void receivePayment(double amount) {
        // Logic for receiving payment
    }
};

#endif