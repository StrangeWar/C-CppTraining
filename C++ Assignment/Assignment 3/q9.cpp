// 9. A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'.
// Its subclass also has an integer data member 'j' and a function named 'printNum' to print the value
// of 'j'. Make an object of the subclass and use it to assign a value to 'i' and to 'j'. Now call the
// function 'printNum' by this object.

#include<iostream>

using namespace std;

class A {

    public:
    int i;
    void printNum() {
        cout << i << endl;
    }
};

class B : public A {

    public:
    int j;
    void printNum() {
        cout << j << endl;
    }
};

int main() {
    B obj;
    obj.i = 12;
    obj.j = 15;
    obj.printNum();
    obj.A::printNum();

    return 0;
}
