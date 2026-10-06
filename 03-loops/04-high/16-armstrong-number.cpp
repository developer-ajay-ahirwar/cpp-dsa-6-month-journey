// Problem: Check whether a number is an Armstrong number.
// Topic: Loop, Digits, and Mathematical Logic
// Difficulty: High
// Approach: Extract digits, calculate their required powers, and compare the sum with the original number.

#include <iostream>
using namespace std;

int main(){
    int number,original_number,sum = 0,temp,digit_count = 0;
    cout << "Enter Number: ";
    cin >> number;
    original_number = number;
    temp = number;
    do{
        int digit = temp % 10;
        temp /= 10;
        //cout << digit << endl;
        digit_count++;
    }while(temp > 0);
    temp = number;
    do{
        int last_digit = temp % 10;
        temp /= 10;
        int power = 1;
        for(int i = 0;i < digit_count;i++){
            power = power * last_digit;
        }
        sum += power;
    }while(temp >0);
   if(original_number == sum){
        cout << "Armstrong" << endl;
   }
    else{
        cout << "Not Armstrong" << endl;
   }
   return 0;
}
