// 4. C++ Program To calculate area of Box using parameterized Constructor.


#include<iostream>
using namespace std;

class BoxArea{
    private:
    float length,breath,height;

    public:

    BoxArea(float l, float b, float h){
        length = l;
        breath = b;
        height = h;
    }

    void area(){
        float area = 2*(length*breath + breath*height + height*length);
        cout<<"Area of Box is "<<area<<endl;
    }
};

int main(){

    float l,b,h;
    cout<<"Enter the sides of box: ";
    cin>>l>>b>>h;
    BoxArea box(l,b,h);
    box.area();
    return 0;
}