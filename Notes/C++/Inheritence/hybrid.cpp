#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"constructer of A\n";
    }
    A(int x){
        cout<<"class of A\n";
    }

};

class B: virtual public A{
    public:
    B(int x): A(10){
        cout<<"class of B\n";
    }

};

class C: virtual public A{
    public:
    C(int x): A(12){
        cout<<"class of C\n";
    }
};

class D: public B, public C{
    public:
    D(int x): B(10), C(12), A(10){
        cout<<"class of D\n";
    }
};

int main() {

    D obj(10);

    return 0;
}