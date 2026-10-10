// Problem: Create a function to reverse an integer.
// Topic: Function and Digit Manipulation
// Difficulty: Medium
// Approach: Extract digits one by one and construct the reversed number.

#include <iostream>
using namespace std;

long long reverse_num(long long num)
{
    long long reverse_n = 0;
    long long temp = num;
    do
    {
        int last_digit = temp % 10;
        temp /= 10;
        reverse_n = reverse_n * 10 + last_digit;

    } while (temp != 0);

    return reverse_n;
}

int main()
{
    long long n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Before Reverse: " << n << " : And After Reverse: " << reverse_num(n) << endl;
    return 0;
}

