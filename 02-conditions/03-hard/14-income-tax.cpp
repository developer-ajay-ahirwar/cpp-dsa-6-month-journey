// Problem: Calculate income tax using different income slabs.
// Topic: if-else-if-else, Arithmetic Operators
// Difficulty: Hard
// Approach: Calculate tax progressively according to each applicable income slab.

#include <iostream>
using namespace std;

int main() {
    long long income;
    cout << "Enter your Income Sir: ";
    cin >> income;

    if (income < 0) {
        cout << "Please Enter a Positive Income";
        return 0;
    }

    long long tax = 0;

    if (income <= 250000) {
        tax = 0;
    } 
    else if (income <= 500000) {
        tax = (income - 250000) * 5 / 100;
    } 
    else if (income <= 1000000) {
        tax = 12500 + (income - 500000) * 20 / 100;
    } 
    else {
        tax = 112500 + (income - 1000000) * 30 / 100;
    }

    cout << "Your Income Tax: " << tax << endl;

    return 0;
}
