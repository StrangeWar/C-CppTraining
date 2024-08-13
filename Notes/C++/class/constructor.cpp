#include<iostream>
#include<string.h>

using namespace std;

class btech{

    public:

    int roll;
    string name;
    int age;

    void display(){
        cout<<"Roll No. : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

    // Default Constructor
    btech(){
        cout<<"I'm default constructor"<<endl;
    }

    // Parameterised Constructor
    btech(int roll,string name, int age){

        cout<<"I'm Parameterised constructor"<<endl;
        this->name = name;
        this->roll = roll;
        this->age = age;
    }

    // Copy Constructor
    btech(btech &obj){
        cout<<"I'm Copy Constructor"<<endl;
        this->name = obj.name;
        this->roll = obj.roll;
        this->age = obj.age;
        }

    ~ btech(){
        cout<<"I'm Destructor"<<endl;
    }
};


int main(){

    btech b1(1,"Vivek",20);
    b1.display();

    btech* b2 = new btech;
    b2->name="Ayush";
    b2->roll=2;
    b2->age=21;


    return 0;
}