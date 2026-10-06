// Problem: Print a right-angled star pattern using nested loops.
// Topic: Nested Loops and Patterns
// Difficulty: High
// Approach: Use an outer loop for rows and an inner loop for stars.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter N: ";
    cin >> n;
    if(n<=0){
        cout << "Enter Non-Nagetive Number:";
    }
    else{
        for(int r = 1;r <= n;r++){
            for (int c = 1; c <= r;c++){
                cout << "* ";
            }
            cout << endl;
        }
    }

    return 0;
}

