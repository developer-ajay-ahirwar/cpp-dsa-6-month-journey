// Problem: Convert Celsius temperature into Fahrenheit.
// Topic: Variables, Input/Output, Arithmetic Operators
// Difficulty: Easy
// Approach: Take Celsius as input and apply the Fahrenheit conversion formula.

#include <iostream>
using namespace std;

int main(){
    int celsius;
    cout << "Enter Temperature in Celsius: " <<endl;
    cin >> celsius;
    float temperature_F = (celsius * 9/5) + 32;
    cout << "Your Temperature In Fahrenheit: " << temperature_F << endl;
    return 0;
}
