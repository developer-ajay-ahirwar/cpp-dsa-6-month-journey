// Problem: Print the first N terms of the Fibonacci series.
// Topic: Loop and Variable Updating
// Difficulty: Hard
// Approach: Generate each term using the previous two terms.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter N:";
    cin >> n;
    if(n <= 0){
        cout << "Invaild Input:";
    }
    else {
        int a =0;
        int b = 1;
        int next;
        for(int i = 1;i<=n;i++){
            cout << a << ", ";
            next = a + b;
            a = b;
            b = next;
        }
    }
   
}
