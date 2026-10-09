// Problem: Create a function to check whether a number is prime.
// Topic: Function and Number Logic
// Difficulty: Medium
// Approach: Check whether the number has any divisor other than 1 and itself.

#include <iostream>
using namespace std;

bool isprime(int num)
{
    bool isPrime = true;
    if (num <= 1)
    {
        isPrime = false;
        return isPrime;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            return isPrime;
        }
    }
    return isPrime;
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (isprime(n))
    {
        cout << "Prime Number: ";
    }
    else
    {
        cout << "Not Prime Number: ";
    }
    return 0;
}
