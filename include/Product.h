#pragma once
#include <string>

using std::string;

class Product {
public:
    Product(const string& name, double price);
private:
    string name;
    double price;

};
