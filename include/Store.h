#pragma once
#include "Product.h"
#include "Customer.h"
#include <vector>

using std::vector;

class Store {
public:
    Store();
    void run();
private:
    vector<Product> products;
    vector<Customer> customers;

};
