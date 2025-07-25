#pragma once
#include <string>;

using std::string;

class Report
{
public:
    string subject = "";
    string body = "";
    int moderatorID;
    int status = -1;
    bool flag = false;
};