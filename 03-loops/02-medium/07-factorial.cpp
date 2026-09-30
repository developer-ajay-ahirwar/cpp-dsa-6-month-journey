// Problem: Calculate the factorial of a number using a loop.
// Topic: Loop and Accumulator
// Difficulty: Medium
// Approach: Multiply all integers from 1 to the given number.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Negative numbers ka factorial undefined hota hai." << endl;
    } else {
        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << n << "! = " << fact << endl;
    }

    return 0;
}
