// Problem: Print a number pyramid pattern using nested loops.
// Topic: Nested Loops and Patterns
// Difficulty: High
// Approach: Control rows and numbers using nested loops.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter N: ";
    cin >> n;

    if(n <= 0){
        cout << "Please Enter Non-Nagetive Number:";
    }
    else {
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=i;j++){
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
