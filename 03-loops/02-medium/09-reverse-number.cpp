// Problem: Reverse the digits of an integer.
// Topic: while Loop and Digit Manipulation
// Difficulty: Medium
// Approach: Extract the last digit and build the reversed number.

#include <iostream>
using namespace std;

int main(){
    int reverse_num=0,number;
    cout << "Enter Number: ";
    cin>> number;
    int temp = abs(number);
    do{
        int last_num = temp % 10;
        temp = temp / 10;
        reverse_num *= 10;
        reverse_num += last_num ;
    }while(temp > 0);
    int n_to_p = (number < 0) ? -reverse_num : reverse_num;
    cout << "Reverse Integer: " << n_to_p;

    return 0;
}

