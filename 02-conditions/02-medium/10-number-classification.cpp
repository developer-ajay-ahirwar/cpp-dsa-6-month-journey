// Problem: Classify a number as positive even, positive odd, negative even, negative odd, or zero.
// Topic: Nested if, Modulus Operator
// Difficulty: Medium
// Approach: First check the sign of the number and then check whether it is even or odd.

#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter Your Number: ";
    cin >> number;

    if(number > 0){
        if(number % 2 == 0){
            cout << "Positive Even";
        }
        else {
            cout << "Positive Odd";
        }
    }
    else if(number < 0){
        if(number % 2 == 0){
            cout << "Negative Even";
        }
        else {
            cout << "Negative Odd";
        }
    }
    else {
        cout << "Number is Zero";
    }
}
