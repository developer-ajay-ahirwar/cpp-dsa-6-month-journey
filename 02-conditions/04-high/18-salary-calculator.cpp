// Problem: Calculate gross salary using different HRA and DA rules.
// Topic: if-else-if-else, Arithmetic Operators
// Difficulty: High
// Approach: Select the appropriate HRA and DA rates based on basic salary and calculate gross salary.

#include <iostream>
using namespace std;

int main (){
    double basic_salary;
    float gross_salary,hra,da;
    cout << "Enter Your Basic Salary: ";
    cin >> basic_salary;

    if(basic_salary > 0){
        //slab 1 to HRA 20% And DA 10;
        if(basic_salary < 10001){
            hra = (basic_salary * 20) / 100;
            da = (basic_salary * 10) / 100;
        }
        //slab 2 to HRA 25% And DA 15;
        else if(basic_salary < 20001){
            hra = (basic_salary * 25) / 100;
            da = (basic_salary * 15) / 100;
        }
        //slab 3 to HRA 30% And DA 20;
        else {
            hra = (basic_salary * 30) / 100;
            da = (basic_salary * 20) / 100;
        }
        gross_salary = basic_salary + hra + da;
        cout << "---------------------Gross Salary-------------------"<<endl;
        cout << "HRA: " << hra << " + " << "DA: " << da << " + " << "Basic Salary: " << basic_salary << " = ";
        cout << gross_salary;
    }
    else {
        cout << "Invaild Basic Salary Input";
    }

    return 0;
}
