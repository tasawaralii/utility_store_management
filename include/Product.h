#pragma once
#include <string>

using std::string;

class Product {
public:
    Product(const string& name, double price);
private:
    int ID;
    string name;
    double price;
    int profit_percent;
    unsigned long int sell;
    int stock;
    bool active;
};
