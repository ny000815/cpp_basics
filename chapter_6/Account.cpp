#include <iostream>
#include <string>
using namespace std;
#include "Account.h"

string Account::getId(){
    return this->id;
}
int Account::getBalance(){
    return this->balance;
}
void Account::setBalance(int balance){
    if (balance >= 0) this->balance = balance;
}
Account::Account(string id, int balance){
    this->id = id;
    this->balance = balance;
}
