// Problem: Create a function to check whether a number is a palindrome.
// Topic: Function and Number Logic
// Difficulty: Hard
// Approach: Reverse the number and compare it with the original number.

#include <iostream>
using namespace std;

bool isPalindrome(long long temp){
    if(temp < 0){
        return false;
    }
    long long original_number = temp;
    long long reveise_number = 0;

    do{
        int last_digit = temp % 10;
        temp /= 10;
        reveise_number = reveise_number * 10 + last_digit;
    }while(temp > 0);
    bool ispalindrome = (original_number == reveise_number) ? true : false;
    return ispalindrome;
}
int main(){
    long long n;
    cout << "Enter Number: ";
    cin >> n;
    if(isPalindrome(n)){
        cout << n << " Is Palindrome Number: " << endl;
    }
    else {
        cout << n << " Not Palindrome Number: " << endl;
    }
    
}
