// Problem: Print all numbers from 1 to N.
// Topic: for loop
// Difficulty: Easy
// Approach: Use a for loop starting from 1 and continue until N.

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<< "Enter Number of N: ";
	cin >> n;
	for(int i = 0;i < n;i++){
		cout<< i<< endl;
	}
	return 0;
}
