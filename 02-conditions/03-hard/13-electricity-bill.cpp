// Problem: Calculate an electricity bill based on the number of units consumed.
// Topic: if-else-if-else, Arithmetic Operators
// Difficulty: Hard
// Approach: Apply different rates according to the unit slabs and calculate the total bill.

#include <iostream>
using namespace std;

int main() {
    int unit;
    cout << "Enter your Unit: ";
    cin >> unit;

    if (unit >= 0) {
        int payable = 0;

        if (unit > 20) {
            payable = (10 * 5) + (10 * 9) + ((unit - 20) * 15);
        } else if (unit > 10) {
            payable = (10 * 5) + ((unit - 10) * 9);
        } else {
            payable = unit * 5;
        }

        cout << "Payable Amount: ₹" << payable << endl;
    } else {
        cout << "Invalid unit Input" << endl;
    }

    return 0;
}
