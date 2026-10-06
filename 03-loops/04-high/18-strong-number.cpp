// Problem: Check whether a number is a Strong Number.
// Topic: Nested Loops and Factorial
// Difficulty: High
// Approach: Extract each digit, calculate its factorial, and compare the factorial sum with the original number.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter N: ";
    cin >> n;
    long long original_number = n;
    long long temp = n;
    long long sum = 0;
    if(n<0){
         cout << "Please Enter Non-Nagetive Number: ";
    }
    else{
        do{
            int last_digit = temp % 10;
            temp /= 10;
            long long factorial = 1;
            for (int i = 1;i <= last_digit;i++){
                factorial *= i;

            }
            sum += factorial;
            //cout << "sum: " << sum<< endl;
        }while(temp > 0);
        if(original_number == sum){
            cout << "Strong Number";
        }
        else{
            cout << "Not Strong Number";
        }
    }
}
