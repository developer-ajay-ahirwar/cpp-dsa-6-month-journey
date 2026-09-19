// Problem: Perform arithmetic operations using two numbers and an operator.
// Topic: switch statement
// Difficulty: Easy
// Approach: Take two numbers and an operator as input and use switch to perform the selected operation.

#include <iostream>
using namespace std;
int main() {
    int first,second,opretor;
    cout << "'+' Please choose 1 \n'-' Please choose 2 \n'*' Please choose 3 \n'/' Please choose 4" <<endl;
    cout << "please choose your Opretor :" << endl;
    cin >> opretor;
    cout << "Please Enter your First Number: " <<endl;
    cin >> first;
    cout << "Please Enter your Second Number: " <<endl;
    cin >> second;
    float calculat;
    switch(opretor){
        case 1:
            calculat = first + second;
            cout << first << " + " << second << " = " <<calculat << endl;
            break;
        case 2:
            calculat = first - second;
            cout << first << " - " << second << " = " <<calculat << endl;
            break;
        case 3:
            calculat = first * second;
            cout << first << " * " << second << " = " <<calculat << endl;
            break;
        case 4:
            calculat = first / second;
            cout << first << " / " << second << " = " <<calculat << endl;
            break;
        default:
            cout << "Please Enter Vaild Opretor: " <<endl;
    }
    return 0;
}
