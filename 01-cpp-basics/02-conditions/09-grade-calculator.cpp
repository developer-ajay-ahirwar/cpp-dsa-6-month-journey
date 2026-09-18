
#include <iostream>
using namespace std;
int main() {
    float percentage;
    cout << "Enter Your Percentage : " << endl;
    cin >> percentage;
    
    if(percentage > 101 || percentage < 0){
        cout << "Please Enter your Percentage 1 to 100 only";
    }
    else if (percentage >= 90){
        cout << "Your A Grade ";
    }
    else if (percentage >=75){
        cout << "Your B Grade ";        
    }
    else if (percentage >=60){
        cout << "Your C Grade ";
    }
    else if (percentage >= 40){
        cout << "Your D Grade ";
    }
    else {
        cout << "You are the Fail";
    }
    
    return 0;
}
