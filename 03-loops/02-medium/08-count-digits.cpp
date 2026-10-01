// Problem: Count the number of digits in an integer.
// Topic: while Loop and Digit Manipulation
// Difficulty: Medium
// Approach: Repeatedly divide the number by 10 and count the iterations.

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int count_number = 0,number;
    cout << "Enter Count Number: ";
    cin >> number;
    int temp = abs(number);
    do{
        temp /= 10;
        count_number++;
    }while(temp > 0);
    cout << "Number of digits: " << count_number ;
    return 0;

}
