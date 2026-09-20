// Problem: Create a Student class and display student information.
// Topic: Class, Object, Member Functions
// Difficulty: Easy
// Approach: Create a Student class with name, age, and marks and use a function to display the data.

#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    int age;
    float marks;
    void despley(){
        cout << "Name: " << name << "\nAge: " << age << "\nMarks: "<< marks << endl;
    }
};
int main(){
    Student s1;
    s1.name = "Ajay";
    s1.age = 23;
    s1.marks = 56.36;
    s1.despley();
    return 0;
}
