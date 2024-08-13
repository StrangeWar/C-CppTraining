#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"cons. of A\n";
    }

    virtual ~A(){
        cout<<"Dist. of A\n";
    }
};

class B: public A{
    public:
    B(){
        cout<<"cons. of B\n";
    }
    ~B(){
        cout<<"Dist. of B\n";
    }
};

int main() {

    B *obj = new B();
    delete obj;

    return 0;
}