// 1. Write a program that defines a shape class with a constructor that gives value to width
// and height. Then define two sub-classes triangle and rectangle, that calculate the area
// of the shape. In the main, define two objects a triangle and a rectangle and then call
// the area () function.
#include <iostream>
using namespace std;

class Shape{
    public:
    float width;
    float height;

    Shape(float w, float h){
        width = w;
        height = h;
    }
};

class Rectangle : public Shape{
    public:

    Rectangle(float w , float h): Shape(w,h){}
    void area(){
        cout << "Area of rectangle is " << width * height << endl;
    }
};

class Triangle : public Shape{
    public:

    Triangle(float w, float h):Shape(w,h){}

    void area(){
        cout << "Area of Triangle is " << (width * height)/2 << endl;
    }
};

int main() {
    //Shape s(12,54);

    Rectangle r(12,85);
    r.area();
    Triangle t(34,24);
    t.area();

    

    return 0;
}