// Problem: Print all even numbers from 1 to N.
// Topic: Loop and Modulus Operator
// Difficulty: Easy
// Approach: Check each number using the modulus operator and print even numbers.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter N: ";
    cin >> n;
    for (int i =1 ; i<=n;i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }
    return 0;
}
