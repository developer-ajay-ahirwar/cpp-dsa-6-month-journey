// Problem: Create a function to find the GCD of two numbers.
// Topic: Function and Number Theory
// Difficulty: Hard
// Approach: Use repeated remainder operations to find the greatest common divisor.

#include <iostream>
using namespace std;
// long long findGcd(long long a, long long b) {
//     // Number theory property: gcd(a, b) = gcd(|a|, |b|)
//     // We normalize negative numbers to positive using basic arithmetic (no abs() function)
//     if ((a == 0) && (b == 0)) {
//         return 0;
//     }
//     if (a < 0) {
//         a = -a;
//     }
//     if (b < 0) {
//         b = -b;
//     }

//     // Euclidean algorithm
//     while (b != 0) {
//         long long temp = b;
//         b = a % b;
//         a = temp;
//     }

//     return a;
// }
long long findGcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    // Agar final result negative hai, toh use positive bana lo
    return (a < 0) ? -a : a;
}
int main()
{
    long long first_input, second_input;
    cout << "Enter First Number: ";
    cin >> first_input;
    cout << "Enter Second Number: ";
    cin >> second_input;
    cout << "GCD : " << findGcd(first_input, second_input) << endl;
    return 0;
}
