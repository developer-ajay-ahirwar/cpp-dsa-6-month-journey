// Problem: Check whether a given date is valid.
// Topic: Nested if, Logical Operators, Leap Year
// Difficulty: Hard
// Approach: Validate the month, determine the maximum days, and handle February using leap-year logic.

#include <iostream>
using namespace std;

int main() {
    int date, month, year;

    cout << "Enter The Date: ";
    cin >> date;
    cout << "Enter The Month: ";
    cin >> month;
    cout << "Enter The Year: ";
    cin >> year;

    // Validate month and year boundaries
    if (month < 1 || month > 12 || year < 1) {
        cout << "Invalid Month or Year";
        return 0;
    }

    // Check if leap year
    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    // Determine max days in the given month
    int maxDays;
    if (month == 2) {
        maxDays = isLeap ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    } else {
        maxDays = 31;
    }

    // Validate the date
    if (date >= 1 && date <= maxDays) {
        cout << date << " / " << month << " / " << year << " Valid Date" << endl;
    } else {
        cout << "Date is not Valid" << endl;
    }

    return 0;
}
