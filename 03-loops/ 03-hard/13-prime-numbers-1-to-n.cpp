// Problem: Print all prime numbers from 1 to N.
// Topic: Nested Loops and Prime Logic
// Difficulty: Hard
// Approach: Check every number for divisibility using a nested loop.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter N: ";
    cin >> n;
    int prime_total = 0;
    if(n<0){
        cout<< "Please Enter Non-Nagetive Number:";
    }
    else{
        for(int num = 2;num <= n;num++){
            bool isprime = true;
            for(int i = 2;i*i <= num;i++){
                //cout << num << " * " << i << " = "<<num % i<<endl;
                if(num % i == 0){
                    isprime = false;
                    break;
                }
            }
            if(isprime){
                cout << "Prime to N: " << num << endl;
            }
        }
    }

    return 0;
}
