#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
    int id;
    std::string name;
    int quantity;
    double price;

    Item(int id, const std::string& name, int quantity, double price)
        : id(id), name(name), quantity(quantity), price(price) {}

    void change(const std::string& newName, int newQuantity, double newPrice) {
        name = newName;
        quantity = newQuantity;
        price = newPrice;
    }
};

#endif