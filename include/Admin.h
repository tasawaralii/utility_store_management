#pragma once
#include <string>

class Admin {
public:
    Admin(const std::string& username, const std::string& password);
    bool login(const std::string& username, const std::string& password);
    void showAdminMenu();
    // ...other admin operations...
private:
    std::string username;
    std::string password;
};
