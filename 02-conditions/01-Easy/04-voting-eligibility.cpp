// Problem: Check whether a person is eligible to vote based on age.
// Topic: if-else
// Difficulty: Easy
// Approach: Compare the given age with the minimum voting age.

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your Age: ";
    cin >> age;
    if(age >= 18){
        cout << "You are Eligibil to put in your Vote";
    }
    else {
        cout << "You are Not Eligibil to put in your Vote";
    }
    return 0;
}
