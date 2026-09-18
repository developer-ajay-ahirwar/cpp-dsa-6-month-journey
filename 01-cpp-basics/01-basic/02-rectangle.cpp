// Problem: Calculate the area and perimeter of a rectangle.
// Topic: Variables, Input/Output, Arithmetic Operators
// Difficulty: Easy
// Approach: Take length and width as input and apply the area and perimeter formulas.

#include <iostream>
using namespace std;

int main(){
    int length,widht;
    cout<< "Enter your Length: " << endl;
    cin >>length;
    cout << "Enter your Widht: " << endl;
    cin >> widht;
    int area = length * widht;
    int perimeter = 2* (length + widht);
    cout << "Area:  " << area << endl;
    cout << "Perimeter:  " << perimeter << endl;
    
}
