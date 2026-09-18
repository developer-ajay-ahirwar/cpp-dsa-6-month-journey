// Problem: Check whether a given number is even or odd.
// Topic: if-else, Modulus Operator
// Difficulty: Easy
// Approach: Divide the number by 2 using the modulus operator and check the remainder.
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter Your Number: " << endl;
    cin >> number;
    if(number % 2 == 0){
        cout << "Number is Even" << endl;
    }
        
    else {
        cout << "Number is Odd" << endl;
    }
    return 0;
}
