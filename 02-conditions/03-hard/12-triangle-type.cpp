// Problem: Determine whether a triangle is equilateral, isosceles, scalene, or invalid.
// Topic: if-else, Logical Operators
// Difficulty: Hard
// Approach: First validate the triangle and then compare its three sides.

#include <iostream>
using namespace std;

int main(){
    int first,second,third;
    cout << "Enter First Sides: ";
    cin >> first;
    cout << "Enter Second Sides: ";
    cin >> second;
    cout << "Enter Third Sides: ";
    cin >> third;
    int sum;
    if(first <=0 || second <=0 || third <=0){
        cout << "Invaild Input";
    }
    else if((first + second > third) && (first + third > second) && (third + second > first)){
        if(first == second && second == third){
            cout << "This is Equilateral triangle";
        }
        else if ((first == second) || (second == third) || (third == first)){
            cout << "This is Isosceles triangle";
        }
        else {
            cout << "This is Scalene triangle";
        }
    }
    else{
        cout << "This is Invalid triangle";
    }
    return 0;
}
