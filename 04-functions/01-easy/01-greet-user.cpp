// Problem: Create a function that prints a greeting message.
// Topic: Function Basics
// Difficulty: Easy
// Approach: Create a function and call it from main().

#include <iostream>
using namespace std;
void greeting(string name){
    cout << "Hello " << name<<endl;
}
int main(){
    string name;
    cout << "Enter Your Name: ";
    cin >> name;
    greeting(name);
    return 0;
}
