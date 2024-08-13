#include <iostream>
using namespace std;

class A{
    int x = 10;
    friend class B;                 //whole class is friend.
    //friend void B::show();        //only show method is friend.
};

class B{
    public:
    void show(){
        A ob;
        cout<<ob.x;
    }

    void put(){
        A obj1;
        cout<<obj1.x;
    }
};

int main() {

    B obj;
    obj.show();

    return 0;
}