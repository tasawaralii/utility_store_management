#include "../include/Store.h"
#include "../include/Utils.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

Store::Store() {
    // ...initialize products/customers...
}

void Store::run() {
    cout << "Welcome to Utility Store Management System!\n";
    Utils::getMenuChoice(1,7);
}
