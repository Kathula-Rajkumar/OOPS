/*
1. Encapsulation is wrapping data (variables) and functions into a single unit class.
2. Also restricts direct access to data using access Modidiers 
*/

#include <iostream>
using namespace std;

class Account{
private:            //Data hiding
    double balance;    
    string password;

public:
   string username;
   string accountId;

};