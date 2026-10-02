// Problem: Check whether a number is a palindrome.
// Topic: Loop and Number Logic
// Difficulty: Hard
// Approach: Reverse the number using a loop and compare it with the original.

#include <iostream>
using namespace std;

int main(){
    int reverse_n = 0,number;
    cout << "Enter N: ";
    cin >> number;
    int temp = number;
    if(number >= 0){
        do{
            int last_digit = temp % 10;
            temp/=10;
            reverse_n = (reverse_n * 10) + last_digit;
        }while(temp > 0);
        if(number == reverse_n){
            cout << "palindrome Number";
        }
        else{
            cout << "Not palindrome Number";
        }
    }
     else{
        cout << "Please Enter a Non-negative Number";
    }
    return 0;
}
