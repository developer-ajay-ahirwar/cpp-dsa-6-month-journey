// Problem: Create an Employee class to store and display employee information.
// Topic: Class, Object, Constructor
// Difficulty: Easy
// Approach: Create an Employee class and initialize employee details using a constructor.

#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
    string name;
    float salary;
    string department;

    
    void desplay(){
        cout << "Name: " << name << "\nSalary: " << salary << "\nDepartment: " << department << endl;  
    }
    Employee(string nameE,float salaryE,string deptE){
        name = nameE;
        salary = salaryE;
        department = deptE;
    }
};
int main(){
    Employee e1("Raj",25000,"Computer dept");
    e1.desplay();

    return 0;
}
