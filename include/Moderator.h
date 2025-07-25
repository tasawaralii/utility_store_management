#pragma once;
#include <string>

using std::string;

class Moderator {
public:
    string first_name;
    string last_name;
    string username;
    string password;
    string CNIC;
    string email;
    char phone[10];
    int salary;
    int ID;
    Moderator() = default;
    Moderator(const string& first_name, const string& last_name, const string& username)
        : first_name(first_name), last_name(last_name), username(username) {}
};