// Problem: Create a function to count the number of digits in an integer.
// Topic: Function and Loops
// Difficulty: Medium
// Approach: Repeatedly remove the last digit and count the iterations.

#include <iostream>
using namespace std;

int digit_count(long long num)
{
    int total_digits = 0;
    long long temp = num;
    do
    {
        temp /= 10;
        total_digits++;
    } while (temp != 0);
    return total_digits;
}
int main()
{
    long long n;
    cout << "Enter Number: ";
    cin >> n;
    cout << n << " Total Digits In Number: " << digit_count(n) << endl;
    return 0;
}
