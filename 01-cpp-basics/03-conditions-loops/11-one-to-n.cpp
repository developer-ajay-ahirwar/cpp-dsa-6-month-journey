// Problem: Print numbers from 1 to N.
// Topic: for loop
// Difficulty: Easy
// Approach: Use a for loop to print every number starting from 1 up to N.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}
