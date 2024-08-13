#include<iostream>

using namespace std;

class btech{

    public:
    int rollno;
    int age;
    float cgpa;
    int num;

    void print(){
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }

    btech(int r,int a,float c ){
        rollno=r;
        age=a;
        cgpa = c;
    }

    btech(){
        cout<<"I'm a default constructor."<<endl;
    }

    btech(btech &object){

        cout<<"I'm a copy constructor."<<endl;
        rollno = object.rollno;
        age = object.age;
        cgpa = object.cgpa;

    }

    ~ btech(){
        cout<<"I'm Destructor num: "<<num<<endl;
    }
};

int main(){

    btech b1,b2;
    b1.num = 1;
    b2.num = 2;
    btech* b3 = new btech;
    b3->num=3;
    btech obj3(*b3);

    obj3.num = 4;
    btech obj4{b1};
    obj4.num = 5;
    delete(b3);


}