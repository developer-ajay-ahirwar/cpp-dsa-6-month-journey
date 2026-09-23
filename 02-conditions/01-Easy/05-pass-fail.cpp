// Problem: Check whether a student has passed or failed based on marks.
// Topic: if-else
// Difficulty: Easy
// Approach: Compare marks with the minimum passing marks.

#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your Marks: ";
    cin >> marks;
    if (marks >= 33){
        cout << "Congratulations, You are Pass";
    }
    else{
        cout << "Sorry, You are Fail ";
    }
    return 0;
}
