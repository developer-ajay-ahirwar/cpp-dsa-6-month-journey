// Problem: Print the multiplication table of a given number from 1 to 10.
// Topic: for loop, Arithmetic Operators
// Difficulty: Easy
// Approach: Use a for loop from 1 to 10 and multiply the given number by each value.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
