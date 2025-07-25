#pragma once;
#include <string>

using std::string;

class Review
{
public:
    int productID;
    int moderatorID;
    int customerID;
    string reviewText;
    int rating;
    int type;
    int status; // 0 for pending, 1 for approved, 2 for rejected
};