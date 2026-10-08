// Problem: Create a function to check whether a number is even.
// Topic: Function and Modulus Operator
// Difficulty: Easy
// Approach: Use the modulus operator inside the function and return the result.

#include <iostream>
using namespace std;

bool iseven(int num){
    if(num % 2 == 0){
        return true;
    }
    return false;
}

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << "Ever: " << iseven(num);
    return 0;
}
