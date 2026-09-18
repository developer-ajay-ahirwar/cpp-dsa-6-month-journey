
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter Your Number: " << endl;
    cin >> number;
    if(number % 2 == 0){
        cout << "Number is Even" << endl;
    }
        
    else {
        cout << "Number is Odd" << endl;
    }
    return 0;
}
