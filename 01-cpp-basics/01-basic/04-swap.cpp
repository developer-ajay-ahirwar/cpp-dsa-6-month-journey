// Problem: Swap the values of two numbers.
// Topic: Variables, Temporary Variable
// Difficulty: Easy
// Approach: Store one value in a temporary variable and exchange the values of the two numbers.

#include <iostream>
using namespace std;

int main(){
    int firstNumber,secondNumber;
    cout << "Enter your First Number: " <<endl;
    cin >> firstNumber;
    cout << "Enter your Second Number: " << endl;
    cin >> secondNumber;
    cout << "Your First Number: " << firstNumber << "  Your Second Number : " << secondNumber << endl;
    cout << "After Swaping the Number"<< endl;
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    cout << "Your First Number: " << firstNumber << "  Your Second Number : " << secondNumber << endl;
    return 0;
}
