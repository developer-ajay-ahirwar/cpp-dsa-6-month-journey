// Problem: Create a function to find the largest of three numbers.
// Topic: Function and Nested Conditions
// Difficulty: Medium
// Approach: Compare the three numbers inside the function.

#include <iostream>
using namespace std;

int find_max(int num1,int num2,int num3){
    return (num1 >= num2 && num1 >= num3) 
    ? num1 
    : (num2 >= num3 && num2 >= num1) 
    ? num2 
    : num3;
}
int main(){
    int n1,n2,n3;
    cout << "Enter Number1: ";
    cin >> n1;
    cout << "Enter Number2: ";
    cin >> n2;
    cout << "Enter Number3: ";
    cin >> n3;
    cout << "Larger Number: " << find_max(n1,n2,n3);
    return 0;

}
