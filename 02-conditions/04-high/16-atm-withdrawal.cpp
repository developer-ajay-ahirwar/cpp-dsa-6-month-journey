// Problem: Validate an ATM withdrawal and calculate the remaining balance.
// Topic: Nested if, Logical Operators
// Difficulty: High
// Approach: Check the withdrawal amount against balance, validity, and denomination rules before updating the balance.

#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int withdrawal_amount;

    cout << "Enter Withdrawal Amount: ";
    cin >> withdrawal_amount;

    // Check positive amount and multiple of 100
    if (withdrawal_amount > 0 && withdrawal_amount % 100 == 0) {
        if (balance >= withdrawal_amount) {
            int temp = withdrawal_amount; // Temporary variable for modulo operations

            int currency500 = temp / 500;
            temp %= 500; // Remaining amount after 500 notes

            int currency200 = temp / 200;
            temp %= 200; // Remaining amount after 200 notes

            int currency100 = temp / 100; // Remaining is only 100 notes

            balance -= withdrawal_amount;

            cout << "\n--- Withdrawal Successful ---" << endl;
            cout << "Currency ₹500 : " << currency500 << endl;
            cout << "Currency ₹200 : " << currency200 << endl;
            cout << "Currency ₹100 : " << currency100 << endl;
            cout << "Remaining Balance: ₹" << balance << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    } else {
        cout << "Invalid withdrawal amount! Please enter a multiple of 100." << endl;
    }

    return 0;
}
