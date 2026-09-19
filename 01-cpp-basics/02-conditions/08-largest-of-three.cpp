// Problem: Find the largest among three numbers.
// Topic: Nested if
// Difficulty: Easy
// Approach: Compare the three numbers using nested conditional statements.

#include <iostream>
using namespace std;
int main() {
    int firstNumber,secondNumber,thridNumber;
    cout << "Enter Your First Number: " << endl;
    cin >> firstNumber;
    cout << "Enter Your Second Number: " << endl;
    cin >> secondNumber;
    cout << "Enter Your Thrid Number: " << endl;
    cin >> thridNumber;
    
    if (firstNumber > secondNumber){
        if (firstNumber > thridNumber){
            cout << "First Number is the Largest Number:";
        }
        else {
            cout << "First Number";
        }
    }
    else if (secondNumber > thridNumber){
        if(secondNumber > firstNumber){
            cout << "Second Number is the Largest Number:";
        }
        else {
             cout << "Second Number";
        }
    }
    else if (thridNumber > firstNumber){
        if (thridNumber > secondNumber){
            cout << "Thrid Number is the Largest Number:";
        }
        else {
            cout << "Thrid Number;";
        }
    }
    else {
        cout << "Thrid Number is the Largest Number:";
    }
    
    return 0;
}
