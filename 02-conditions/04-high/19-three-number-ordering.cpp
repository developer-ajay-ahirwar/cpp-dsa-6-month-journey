// Problem: Arrange three different numbers in ascending order without using sorting.
// Topic: Nested if, Logical Operators
// Difficulty: High
// Approach: Compare the three numbers using conditional statements and print them in ascending order.

#include <iostream>
using namespace std;

int main(){
    int first,second,third;
    cout << "Enter First Number: ";
    cin >> first;
    cout << "Enter Second Number: ";
    cin >> second;
    cout << "Enter Third Number: ";
    cin >> third;


    if((first <= second) && first < third){
            if(second < third){
                cout << "Small Num: " << first << "\nMiddle Num: " << second << "\nLarge Num: " << third;
            }
            else {
                cout << "Small Num: " << first << "\nMiddle Num: " << third << "\nLarge Num: " << second;
            }
    }

    else if((second <= third) && (second < first)){
            if(first < third){
                cout << "Small Num: " << second << "\nMiddle Num: " << first << "\nLarge Num: " << third;
            }
            else {
                cout << "Small Num: " << second << "\nMiddle Num: " << third << "\nLarge Num: " << first;
            }
    }

    else if((third <= first) && (third < second)){
            if(first < second){
                cout << "Small Num: " << third << "\nMiddle Num: " << first << "\nLarge Num: " << second;
            }
            else {
                cout << "Small Num: " << third << "\nMiddle Num: " << second << "\nLarge Num: " << first;
            }
    }

    else {
        cout << "Small Num: " << first << "\nMiddle Num: " << second << "\nLarge Num: " << third;
    }
    return 0;

}
