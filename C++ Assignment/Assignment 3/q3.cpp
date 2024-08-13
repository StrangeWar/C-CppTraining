// 3. C++ Program to calculate Volume of Cube using parameterized constructor.

#include<iostream>
using namespace std;

class Cube_vol{
    private:
    float side;

    public:

    Cube_vol(int a){
        side = a;
    }

    void vol(){
        float vol = side * side * side;
        cout<<"Volume of Cube is "<<vol<<endl;
    }
};

int main(){

    float a;
    cout<<"Enter the side of Cube: ";
    cin>>a;
    Cube_vol c(a);
    c.vol();
    return 0;
}