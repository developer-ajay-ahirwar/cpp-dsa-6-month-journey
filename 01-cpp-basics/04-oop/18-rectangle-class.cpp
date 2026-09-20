// Problem: Create a Rectangle class to calculate the area of a rectangle.
// Topic: Class, Object, Constructor, Encapsulation
// Difficulty: Easy
// Approach: Store length and width as private data and calculate the area using a member function.

#include <iostream>
#include <iostream>
using namespace std;

class Rectangle{
    private:
    float lenght;
    float width;

    public:
    float getArea(){
        float area = lenght * width;
        return area;
    }
    Rectangle(float inlenght,float inwidth){
        lenght = inlenght;
        width = inwidth;
    }
};
int main(){
    Rectangle areacal(56,25.3);
    float area = areacal.getArea();
    cout << "Area : " << area << endl;
    return 0;

}
