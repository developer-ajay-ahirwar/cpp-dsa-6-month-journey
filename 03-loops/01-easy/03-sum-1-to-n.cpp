// Problem: Calculate the sum of all numbers from 1 to N.
// Topic: for loop, Accumulator
// Difficulty: Easy
// Approach: Use a loop and continuously add each number to a sum variable.

#include <iostream>
using namespace std;

int main(){
    int sum,n;
    cout << "Enter N Number: ";
    cin >> n;
    for (int i= 1;i<=n;i++){
        sum += i;
    }
    cout << "Sum OF N Of Number: " << sum;
    return 0;
}
