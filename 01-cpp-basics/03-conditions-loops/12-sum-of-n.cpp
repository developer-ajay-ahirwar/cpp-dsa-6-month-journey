// Problem: Calculate the sum of numbers from 1 to N.
// Topic: for loop
// Difficulty: Easy
// Approach: Use a loop to add each number from 1 to N to a sum variable.

#include <iostream>
using namespace std;

int main(){
    int Number;
    cout << "Enter a number: ";
    cin >> Number;
    int total = 0;
    for(int i = 1; i <= Number; i++){
        total += i;
        
    }
    cout << total << " ";
    return 0;
}
