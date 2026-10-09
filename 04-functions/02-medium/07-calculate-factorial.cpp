// Problem: Create a function to calculate the factorial of a number.
// Topic: Function and Loops
// Difficulty: Medium
// Approach: Use a loop inside the function to calculate the factorial.

#include <iostream>
using namespace std;

long long factorial(int number){
    long long fac = 1;
    for(int i = 1; i <= number;i++){
        fac = fac * i;
    }
    return fac;
}
int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    if(num < 0){
        cout << "Please Enter Non-Nagetive Number: ";
    }
    else if (num > 20){
        cout << "Number is too large please Enter 0-20:";
    }
    else {
        cout << num << " Factorial is: " << factorial(num);
    }
    
    return 0;

}
