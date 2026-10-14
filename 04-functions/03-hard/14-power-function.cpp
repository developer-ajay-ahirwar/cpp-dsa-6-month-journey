// Problem: Create a function to calculate the power of a number without using the built-in power function.
// Topic: Function and Loops
// Difficulty: Hard

#include <iostream>
using namespace std;
// Function to calculate base^exponent without using the built-in pow() function
double power(double base, int exponent) {
    // Handle 0^0 convention
    if (base == 0 && exponent == 0) {
        return 1.0;
    }

    // Handle division by zero for base 0 with a negative exponent
    if (base == 0 && exponent < 0) {
        cout << "Error: Division by zero for 0 with a negative exponent." << endl;
        return 0.0;
    }

    double result = 1.0;

    // Use long long to prevent overflow if exponent is INT_MIN
    long long absExponent = exponent;
    if (absExponent < 0) {
        absExponent = -absExponent;
    }

    // Multiply the base repeatedly according to the absolute exponent
    for (long long i = 0; i < absExponent; ++i) {
        result *= base;
    }

    // If the original exponent was negative, take the reciprocal
    if (exponent < 0) {
        result = 1.0 / result;
    }

    return result;
}

int main() {
    double base;
    int exponent;
    cout << "Entet Base: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> exponent;
    cout << base << " ^ " << exponent << " = "<< power(base, exponent) << endl;     // Output: 8


    return 0;
}
