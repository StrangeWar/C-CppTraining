// Write a program with a mother class animal. Inside it define a name and an age
// variables, and set_value () function. Then create two sub class Zebra and Dolphin
// which write a message telling the age and name of animal, also giving some extra
// information for both sub class (e.g. place of origin).place of origin of zebra is Earth
// and place of origin of dolphin is water.

#include <iostream>
using namespace std;

class Animal{
    public:
    string name;
    int age;

    void set_value(string n, int a){
        name = n;
        age = a;
    }
};

class Zebra:public Animal{
    public:
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"Place of origin: Earth"<<endl;
    }
};

class Dolphine:public Animal{
    public:
        void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"Place of origin: Water"<<endl;
    }
};

int main() {

    Zebra z;
    Dolphine d;

    z.set_value("Bhola", 5);
    d.set_value("Mira",3);
    z.show();
    d.show();

    return 0;
}   