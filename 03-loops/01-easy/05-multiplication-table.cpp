// Problem: Print the multiplication table of a given number.
// Topic: Loop and Arithmetic Operators
// Difficulty: Easy
// Approach: Multiply the given number by values from 1 to 10.

#include <iostream>
using namespace std;

int main(){
    int table;
    cout << "Enter Table: ";
    cin >> table;
    for(int i = 1; i <=10; i++){
        cout << table << " * " << i << " = " << table * i << endl;
    }
    return 0;
}
