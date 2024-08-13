#include<iostream>
using namespace std;

class A;

class B{
    public:
    void show();
    void put();
};

class A{
    int x = 100;
    friend void B::show();
};

void B::show(){
    A obj;
    cout << obj.x << endl;
}

void B::put(){
    cout << "Hello" << endl;
}

int main(){
    B obj1;
    obj1.put();
    obj1.show();

    return 0;
}