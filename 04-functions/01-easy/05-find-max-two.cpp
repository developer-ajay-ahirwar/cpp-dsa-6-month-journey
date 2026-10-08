// Problem: Create a function to find the larger of two numbers.
// Topic: Function and Conditional Statements
// Difficulty: Easy
// Approach: Compare both numbers inside the function and return the larger value.

#include <iostream>
using namespace std;

int larger(int num1,int num2){
    return (num1 > num2) ? num1: num2;
}
int main(){
    int first,second;
    cout << "Enter First: ";
    cin >> first;
    cout << "Enter Second: ";
    cin >> second;
    cout << "Larger Number: " << larger(first,second);
    return 0;
}
