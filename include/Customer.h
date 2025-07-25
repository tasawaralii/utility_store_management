#pragma once
#include <string>

using std::string;

class Customer {
public:
    Customer(const string& name, const string& cnic)
        : name(name), CNIC(cnic) {};

    private:
    string name;
    string CNIC;

};
