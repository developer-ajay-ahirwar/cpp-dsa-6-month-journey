// Problem: Check whether a number is prime.
// Topic: Loop and Conditional Logic
// Difficulty: Hard
// Approach: Check whether the number has any divisor other than 1 and itself.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter N:";
    cin >> num;
    bool isprime = true;
    if(num <= 1){
        cout << "Not Prime";
    }
    else{
        //for(int i = 1;i <= num;i++){
            //if(num % i == 0){
                //div_count++;
            //}
        //}
        //if(div_count == 2){
            //cout << "Prine Number";
        //}
        //else {
            //cout << "Not Prime";
        //}
        for(int i = 2; i*i <= num;i++){
            if(num % i == 0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            cout << "Prime number:";
        }
        else {
            cout << "Not prime:";
        }
    }

    return 0;
}
