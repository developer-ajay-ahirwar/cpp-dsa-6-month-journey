// Problem: Create a function to generate the first N Fibonacci numbers.
// Topic: Function and Iteration
// Difficulty: Hard


#include <iostream>
using namespace std;
// Function to generate and print the first N Fibonacci numbers
void generateFibonacci(int n) {
    if (n <= 0) {
        cout << "Please enter a positive integer." <<endl;
        return;
    }

    long long t1 = 0;
    long long t2 = 1;

    cout << "The first " << n << " Fibonacci numbers are:\n";

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1;
        } else if (i == 2) {
            cout << ", " << t2;
        } else {
            long long nextNum = t1 + t2;
            cout << ", " << nextNum;
            t1 = t2;
            t2 = nextNum;
        }
    }
    cout <<endl;
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci terms (N): ";
    cin >> n;

    generateFibonacci(n);

    return 0;
}
