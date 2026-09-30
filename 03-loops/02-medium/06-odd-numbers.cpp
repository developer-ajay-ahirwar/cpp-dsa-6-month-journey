// Problem: Print all odd numbers from 1 to N.
// Topic: Loop and Modulus Operator
// Difficulty: Medium
// Approach: Check each number for an odd remainder and print it.

#include <iostream>
using namespace std;

int main(){
    int odd_number;
    cout << "Enter N: ";
    cin >> odd_number;
    int i = 1;
    while(i <= odd_number){
        if(i % 2 != 0){
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
