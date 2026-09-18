// Problem: Check whether a number is positive, negative, or zero.
// Topic: if-else-if-else
// Difficulty: Easy
// Approach: Take a number as input and check its value using conditional statements.

#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter Your Number: " << endl;
    cin >> number;
    if (number > 0){
        cout << "Your Number is Positive: " <<endl;
    }
    else if(number < 0){
        cout << "Your Number is Negative: " <<endl;
    }
    else {
        cout << "Your Number is Zero: " << endl;
    }
    return 0;
}
