#include <iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"Hello\n";
    }

    void show(int x){
        cout<<"Java\n";
    }

    void show(int x, int y){
        cout<<"Python\n";
    }
};

int main() {

    A obj;
    obj.show();
    obj.show(10);
    obj.show(12,33);

    return 0;
}