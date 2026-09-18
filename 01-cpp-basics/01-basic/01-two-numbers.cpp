// Problem: Calculate sum, difference, product and division of two numbers.
// Topic: Variables, Input/Output, Arithmetic Operators
// Difficulty: Easy
// Approach: Take two integers as input and perform all four arithmetic operations. 

#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber;
    cout << "Enter Frist numbers: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    int sum = firstNumber + secondNumber;
    int difference = firstNumber - secondNumber;
    float multiplicaton = firstNumber * secondNumber;
    float division = (float)firstNumber / secondNumber;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "multiplicaton: " << multiplicaton << endl;
    cout << "Division: " << division << endl;
    return 0;
}
