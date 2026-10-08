// Problem: Create a function to calculate the square of a number.
// Topic: Function and Arithmetic Operators
// Difficulty: Easy
// Approach: Pass a number to a function and return its square.

#include <iostream>
using namespace std;
int square(int num){
    return num * num;
}

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << "Square: " << square(num);
    return 0;
}
