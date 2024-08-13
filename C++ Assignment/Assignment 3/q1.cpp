// 1. Write a program to print the area of a rectangle by creating a class named 'Area' having one function. Length and breadth of the rectangle are entered through keyboard using Parameterized constructor.

#include<iostream>

using namespace std;

class Area{

    private:
    int length;
    int breadth;

    public:
    Area(int l, int b){
        length = l;
        breadth = b;
        }
    
    void printArea(){
        int area = length*breadth;
        cout<<"Area of rectangle: "<<area<<endl;
    }

};

int main(){
    int length, breadth;
    cout<<"Enter the length of rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of rectangle: ";
    cin>>breadth;
    Area obj(length, breadth);
    obj.printArea();
    return 0;
}