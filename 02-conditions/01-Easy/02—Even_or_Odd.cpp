// Problem: Check whether a given number is even or odd.
// Topic: if-else, Modulus Operator
// Difficulty: Easy
// Approach: Check the remainder when the number is divided by 2.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your Number: " << endl;
    cin >> n;
    if(n % 2 ==0 ){
        cout << "Number " << n << " is Even";
    }
    else {
        cout << "Number N is Odd";
    }
    return 0;
}
