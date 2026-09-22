// Problem: Print all even numbers from 1 to N.
// Topic: for loop, if statement, Modulus Operator
// Difficulty: Easy
// Approach: Loop from 1 to N and print numbers whose remainder after division by 2 is zero.

#include <iostream>
using namespace std;

int main(){
    int Number;
    cout << "Enter a number: ";
    cin >> Number;
    int total = 0;
    for(int i = 1; i <= Number; i++){
        if (i % 2 == 0){
            total += i;
        }
    }
    cout << "The sum of even numbers from 1 to " << Number << " is: " << total << endl;
    return 0;
}
