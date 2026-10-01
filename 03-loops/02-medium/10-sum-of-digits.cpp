// Problem: Calculate the sum of all digits of an integer.
// Topic: while Loop and Modulus Operator
// Difficulty: Medium
// Approach: Extract each digit and add it to the sum.

#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter Number: ";
    cin >> number;
    int temp = abs(number);
    int sum_of_digit = 0;
    do{
        int single_digit = temp % 10;
        temp /= 10;
        sum_of_digit += single_digit;

    }while(temp >0);
    cout << "sum of digitS: " << sum_of_digit;
}
