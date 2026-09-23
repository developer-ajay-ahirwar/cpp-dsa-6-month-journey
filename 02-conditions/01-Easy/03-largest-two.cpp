// Problem: Find the largest between two numbers.
// Topic: if-else
// Difficulty: Easy
// Approach: Compare the two numbers using an if-else condition.

#include <iostream>
using namespace std;
int main(){
    int first,second;
    cout << "Enter your First Number: ";
    cin >> first;
    cout << "Enter Your Second Number: ";
    cin >> second;

    if (first == second){
        cout << "Both Number are Equal";
    }
    else if(first > second){
        cout << "First Number is Largest";
    }
    else{
        cout << "Second Number is Largest";
    }
    return 0;
}
