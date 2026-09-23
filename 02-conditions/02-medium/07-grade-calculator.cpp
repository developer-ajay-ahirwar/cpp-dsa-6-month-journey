// Problem: Calculate a student's grade based on percentage.
// Topic: if-else-if-else
// Difficulty: Medium
// Approach: Compare the percentage with different grade ranges.

#include <iostream>
using namespace std;

int main(){
    int percentage;
    cout << "Enter your Percentage: ";
    cin >> percentage;

    if(percentage > 100 || percentage > 0){
        cout << "Please Enter Vaild Percentage";
    }
    else if (percentage >= 90){
        cout << "Congratulations, Your A+ Grade ";
    }
    else if (percentage >= 70){
        cout << "Congratulations, Your A Grade ";
    }
    else if (percentage >= 60){
        cout << "Congratulations, Your B Grade ";
    }
    else if (percentage >= 40){
        cout << "Congratulations, Your C Grade ";
    }
    else {
        cout << "Sorry, Your are fail";
    }
    return 0;
}
