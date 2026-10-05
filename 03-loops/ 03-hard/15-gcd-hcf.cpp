// Problem: Find the GCD of two numbers using a loop.
// Topic: Loop and Number Theory
// Difficulty: Hard
// Approach: Repeatedly use the remainder operation until the remainder becomes zero.

#include <iostream>
using namespace std;

int main(){
    int first,second,gcd=1;
    cout << "Enter Frist: ";
    cin >> first;
    cout << "Enter Second: ";
    cin >> second;
    bool istrue = ((first <= 0) || (second <=0)) ? false : true ;
    if(istrue){
        int smaller = (first >= second) ? second : first;
        for(int i = 1;i<=smaller;i++){
            if((first % i == 0) && (second % i == 0)){
                gcd = i;
            }
        }
        cout << "GCD: " << gcd;
    }
    else {
        cout << "Please Enter Non-Nagetive Number: ";
    }
    return 0;
}
