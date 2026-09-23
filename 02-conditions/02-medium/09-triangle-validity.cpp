// Problem: Check whether three given angles form a valid triangle. 
// Topic: if-else, Arithmetic Operators 
// Difficulty: Medium 
// Approach: Check whether the sum of the three angles is equal to 180 degrees.

#include <iostream>
using namespace std;

int main(){
    int firstA,secondA,thirdA;
    cout << "Enter the First Angle: ";
    cin >> firstA;
    cout << "Enter the Second Angle: ";
    cin >> secondA;
    cout << "Enter the Third Angle: ";
    cin >> thirdA;
    if(firstA > 0 && secondA > 0 && thirdA > 0){
       int totalsum = firstA + secondA + thirdA;
       if (totalsum == 180){
        cout << "This is a valid triangle";
        }   
        else {
            cout << "This is not a valid triangle";
        }
    }
    else {
        cout << "Please Enter positive Angles";
    }
    return 0;
}
