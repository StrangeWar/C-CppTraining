// Virtual Destructor: Create a base class Base with a virtual destructor. Derive a class derived
// Derived from Base and dynamically allocate a Derived object using a Base pointer.
// Demonstrate that the destructor of Derived is called when the Base pointer is deleted.

#include <iostream>
using namespace std;

class Base{
    public:
    virtual ~Base(){
        cout<<"I'm a Destuctor"<<endl;
    };

};

class Derived: public Base{
    public:
    Derived(){
        cout<<"I'm a Derived class."<<endl;
    }

};

int main() {

    Base *obj;
    obj = new Derived();
    delete obj;
    return 0;
}