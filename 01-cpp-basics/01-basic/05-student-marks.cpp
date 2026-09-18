// Problem: Calculate the total marks and percentage of five subjects.
// Topic: Variables, Input/Output, Arithmetic Operators
// Difficulty: Easy
// Approach: Take five subject marks as input, calculate the total, and then calculate the percentage.

#include <iostream>
using namespace std;

int main(){
    int hindi_M,english_M,computer_M,math_M,physics_M;
    cout << "Please Enter your Hindi Marks: " << endl;
    cin >> hindi_M;
    cout << "Please Enter your English Marks: " << endl;
    cin >> english_M;
    cout << "Please Enter your Computer Marks: " << endl;
    cin >> computer_M;
    cout << "Please Enter your Math Marks: " << endl;
    cin >> math_M;
    cout << "Please Enter your Physics Marks: " << endl;
    cin >> physics_M;
    int total_marks = 5;
    float obtained_marks = hindi_M + english_M + computer_M + math_M + physics_M;
    float percentage = (obtained_marks / total_marks );
    cout << "your Obtained Marks: " << obtained_marks <<endl;
    cout << "your Percentage Marks: " << percentage << "%"<<endl;
    
    return 0;
}
