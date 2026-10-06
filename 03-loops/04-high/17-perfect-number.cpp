// Problem: Check whether a number is a Perfect Number.
// Topic: Loop and Divisors
// Difficulty: High
// Approach: Find proper divisors and compare their sum with the original number.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Number: ";
    cin >> num;
    int original = num;
    if(num<=0){
        cout << "Please Enter Non-Nagetive: ";
    }
    else{
        int divison = 0;
        for(int i = 1;i <= num/2;i++){
            if(num % i == 0){
               divison += i;
               //cout << i << endl;
            }
            //cout << i << endl;
        }
        if(original == divison){
            cout << "Perfect number";
        }
        else {
            cout << "Not Perfect";
        }
    }
}
