#include <iostream>

using namespace std;

class btech{

    public:
    int roll;
    int age;

    btech(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address of this: "<<this<<endl;
        }


    void print(){
        cout<<"Roll: "<<this->roll<<endl;
        cout<<"Age: "<<this->age<<endl;

    }
};

int main(){

    btech b1;
    b1.roll = 21;
    b1.age = 24;

    cout<<"Roll: "<<b1.roll<<endl;
    cout<<"Age: "<<b1.age<<endl;
    cout<<"Address of b1: "<<&b1<<endl;

    cout<<"\n"<<endl;

    btech* b2 = new btech;
    b2->roll = 22;
    b2->age = 25;
    cout<<"Roll: "<<b2->roll<<endl;
    cout<<"Age: "<<b2->age<<endl;
    cout<<"Address of b2: "<<b2<<endl;

    return 0;
}