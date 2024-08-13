#include<iostream>

using namespace std;

class btech{
    public:

    string roll;
    int age;
    int cgpa;


    btech():roll(""),age(0),cgpa(0){};
    btech(string r,int a,int c):roll(r),age(a),cgpa(c){};
    btech(string r, int a):roll(r),age(a){};
    btech(int a,float c):age(a),cgpa(c){};
    btech(float c):cgpa(c){};


    void display(){
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
    
    };

int main(){
    btech b1;
    b1.display();

    btech b2("btech23",24,8.7);
    b2.display();

    btech b3("btech12424",8.5);
    b3.display();

    btech b4(25,6);
    b4.display();

    btech b5(9.9);
    b5.display();

    return 0;
    
}
