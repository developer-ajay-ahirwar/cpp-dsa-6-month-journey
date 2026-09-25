// Problem: Check whether a given hour, minute, and second represent a valid time.
// Topic: if-else, Logical Operators
// Difficulty: High
// Approach: Validate each time component against its allowed range.

#include <iostream>
using namespace std;

int main(){
    int hour,minute,second;
    cout << "Enter Hour:  ";
    cin >> hour;
    cout << "Enter Minute:  ";
    cin >> minute;
    cout << "Enter Second:  ";
    cin >> second;

    if(((hour >= 0) && (hour < 24)) && ((minute >= 0) && (minute < 60)) && ((second >= 0) && (second < 60))){
        cout << "----------------Vaild Time---------------------" <<endl;
        cout << hour << ":" <<minute << ":" << second;
    }
    else {
        cout << "Invaild Time";
    }
    return 0;
}
