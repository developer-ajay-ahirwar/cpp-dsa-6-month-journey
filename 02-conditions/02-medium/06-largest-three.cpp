// Problem: Find the largest among three numbers.
// Topic: if-else, Logical Operators
// Difficulty: Medium
// Approach: Compare each number with the other two numbers.

#include <iostream>
using namespace std;

int main(){
    int first,second,third;
    cout << "Enter First Number: ";
    cin >> first;
    cout << "Enter Second Number: ";
    cin >> second;
    cout << "Enter Third Nubmer: ";
    cin >> third;

    if(first > second && first > third){
        cout << "First number is Largest";
    }
    else if (second > third && second > first){
        cout << "Second Nubmer is largest";

    }
    else if (third > first && third > second ){
        cout << "Third Number is largest";
    }
    return 0;
}
