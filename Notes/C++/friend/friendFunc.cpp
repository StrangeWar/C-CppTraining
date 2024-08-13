#include <iostream>
using namespace std;

class A{
    int x = 10;
    friend void show();
};

void show(){
    A obj;
    cout << obj.x << endl;
}

int main() {

    show();

    return 0;
}