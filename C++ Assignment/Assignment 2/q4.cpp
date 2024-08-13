// 4. WAP to find area of circle. Area of Circle = PI * r * r Where, PI = 3.14 (Using Class and Object)
#include<iostream>

using namespace std;

class Circle{
    private:
    
    float radius;
    float PI = 3.14;

    public:
    void setRadius(float r){
        radius = r;
        }

    void area(){
        float area = PI * radius * radius;
        cout<<"Area of Circle is "<<area<<endl;
    }
};

int main(){
    Circle c1;
    c1.setRadius(5.0);
    c1.area();

    return 0;
}