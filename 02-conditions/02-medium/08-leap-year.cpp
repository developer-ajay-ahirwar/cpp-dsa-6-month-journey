// Problem: Check whether a given year is a leap year.
// Topic: if-else, Logical Operators, Modulus Operator
// Difficulty: Medium
// Approach: Check whether the year is divisible by 400 or divisible by 4 but not by 100.

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter The Year: ";
    cin >> year;

    if (year % 400 == 0) {
        cout << "Leap Year";
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        cout << "Leap Year";
    }
    else {
        cout << "Not Leap Year";
    }

    return 0;
}
