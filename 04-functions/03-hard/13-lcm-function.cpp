// Problem: Create a function to find the LCM of two numbers.
// Topic: Function and Number Theory
// Difficulty: Hard
// Approach: Use a mathematical relationship between LCM and GCD.

#include <iostream>
using namespace std;

// Custom absolute value function to avoid <cmath>
long long custom_abs(long long x) {
    return (x < 0) ? -x : x;
}

// Euclidean algorithm for GCD
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return custom_abs(a);
}

// LCM function
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) {
        return 0;
    }

    // Divide first by GCD to prevent integer overflow
    return (custom_abs(a) / gcd(a, b)) * custom_abs(b);
}

int main() {
    long long num1,num2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second  Number: ";
    cin >> num2;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << "\n";

    return 0;
}
