// • Virtual Functions Basics: Write a program that demonstrates the use of virtual functions.
// Create a base class Shape with a virtual function area ( ) . Derive two classes Circle and
// Rectangle that override the area ( ) function. Implement the functions to calculate the area of a
// circle and a rectangle, respectively. Create objects of these derived classes and call the area ( )
// function using base class pointers.

#include <iostream>
using namespace std;

class Shape{
    public:
    //pure virtual function
    virtual double area()=0;
    virtual double perimeter()=0;
    };

class Circle: public Shape{
    private:
    double radius;
    public:
    Circle(double r) {
         radius = r;
        }

    double area() {
         return 3.14 * radius * radius; 
        }
    double perimeter(){
        return 2*3.14*radius;
    }
};

class Rectangle : public Shape{
    private:
    double length, width;
    public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
        }
    double area() {
        return length * width;
        }
    double perimeter(){
        return 2*(length*width);
    }
};

int main() {

    Shape *obj1;
    Shape *obj2;
    obj1 = new Circle(7);
    obj2 = new Rectangle(5,6);
    cout<<"Area of Circle: "<<obj1->area()<<endl;
    cout<<"Perimeter of Circle: "<<obj1->perimeter()<<endl;
    cout<<"Area of Rectangle: "<<obj2->area()<<endl;
    cout<<"Perimeter of Rectangle: "<<obj1->perimeter()<<endl;
    
    return 0;
}