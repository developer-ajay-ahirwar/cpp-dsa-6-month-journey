// Problem: Print all numbers from N to 1 in reverse order.
// Topic: for loop
// Difficulty: Easy
// Approach: Start the loop from N and decrease the value until it reaches 1.

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter Number ";
	cin>> n;
	for(int i = n;i>0;i--){
		cout<<i <<endl;
  }
  return 0;

}

