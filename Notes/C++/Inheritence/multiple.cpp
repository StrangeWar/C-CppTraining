//multiple inheritence

#include<iostream>

using namespace std;

class Engine{
    public:
    void start(){
        cout<<"Engine started"<<endl;
        }
};

class Body{
    public:
    void color(){
        cout<<"Body color is red"<<endl;
        }

};

class car:public Engine, public Body{
    public:
    car(){
        cout<<"I am car"<<endl;
        color();
        start();
    }
};

int main(){
    car c;
    return 0;
}