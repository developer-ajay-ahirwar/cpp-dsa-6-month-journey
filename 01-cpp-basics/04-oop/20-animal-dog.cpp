// Problem: Create an Animal class and inherit it into a Dog class.
// Topic: Inheritance, Class, Object, Member Functions
// Difficulty: Easy
// Approach: Create an Animal class with an eat function and inherit it into Dog with an additional bark function.

#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "eat:" << endl;
    }

};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Dog bark: " << endl;
    }
};
int main(){
    Dog d1;
    d1.eat();
    d1.bark();
}
