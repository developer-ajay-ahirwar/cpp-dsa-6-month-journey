// Problem: Create a function to add two numbers.
// Topic: Function with Parameters and Return Value
// Difficulty: Easy
// Approach: Pass two numbers to a function and return their sum.

#include <iostream>
using namespace std;
int add(int num1,int num2){
    int sum = num1 + num2;
    return sum;
}
int main(){
    int first,second;
    cout << "Enter First: ";
    cin >> first;
    cout << "Enter Second: ";
    cin >> second;
    cout << "Sum : " << add(first,second);
}
