// Problem: Perform arithmetic operations while handling invalid operators and division by zero.
// Topic: switch, if-else
// Difficulty: Hard
// Approach: Use switch for operations and conditional checks for invalid cases.

#include <iostream>
using namespace std;

int main(){
    int first,second;
    char operators;
    cout << "Enter your First Number: ";
    cin >> first;
    cout << "Enter your second Number: ";
    cin >> second;
    cout << "Enter your operator: ";
    cin >> operators;
    float calculatingValue = 0;
    switch(operators){
        case '+':
            calculatingValue = first + second;
                cout << calculatingValue << " Your Calculting Value";
            break;
        case '-':
            calculatingValue = first - second;
                cout << calculatingValue << " Your Calculting Value";
            break;
        case '*':
            calculatingValue = first * second;
                cout << calculatingValue << " Your Calculting Value";
            break;
        case '/':
            if(second != 0){
                calculatingValue = (float)first / second;
                cout << calculatingValue << " Your Calculting Value";
            }
            else {
                cout << "Not division by zero";
            }
            break;
        default:
            cout << operators << " Your Opertor Invalid";
            break;
    }
}
