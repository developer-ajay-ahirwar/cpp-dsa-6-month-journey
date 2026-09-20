// Problem: Create a bank account with deposit, withdrawal, and balance features.
// Topic: Class, Object, Member Functions
// Difficulty: Easy
// Approach: Create a BankAccount class and implement functions for depositing, withdrawing, and displaying balance.

#include <iostream>
#include <string>
using namespace std;

class Bank_Account{
    public:
    string account_holder;
    double balance;

    double desposit(double amount){
        balance += amount;
        return balance;
    }
    void withdraw(double amount){
        if(balance >= amount) {
            balance -= amount;
        }
        else {
            cout << "not amount" << endl;
        }
    }
    void desplay(){
        cout << "Balance " << balance << endl;
    }
    
};
int main(){
    Bank_Account account;
    account.account_holder = "Raj";
    account.balance = 6522;
    cout << "Susfully: " <<account.desposit(5000) << endl;
     
    return 0;
}
