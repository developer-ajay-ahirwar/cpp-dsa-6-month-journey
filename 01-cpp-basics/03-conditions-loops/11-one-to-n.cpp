
#include <iostream>
using namespace std;

int main(){
    int Number;
    cout << "Enter a number: ";
    cin >> Number;
    int total = 0;
    for(int i = 1; i <= Number; i++){
        total += i;
        
    }
    cout << total << " ";
    return 0;
}
