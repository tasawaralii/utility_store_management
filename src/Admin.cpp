#include "../include/Admin.h"
#include <iostream>
using std::string;

Admin::Admin(const string& username, const string& password)
    : username(username), password(password) {}

bool Admin::login(const string& uname, const string& pwd) {
    return (uname == username && pwd == password);
}

void Admin::showAdminMenu() {
    std::cout << "Admin Menu:\n";

}
