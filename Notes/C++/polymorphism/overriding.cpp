#include <iostream>
using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"Inside class A"<<endl;
    }

    void put(){
        cout<<"Non-virtual of A."<<endl;
    }
};

class B:public A{
    public:
    void show(){
        cout<<"Inside class B"<<endl;
    }

    void put(){
        cout<<"Non-virtual of B."<<endl;
    }
};

int main() {

    A *obj1;
    B obj2;
    
    obj1 = &obj2;
    obj1->show();  //overriding
    obj1->put();   //no overriding
    obj1->A::show();

    return 0;
}