// 1. WAP to print your name, age and city and pin code on screen (Using Class).

#include<iostream>

using namespace std;
class Person {
    public:
    string name = "Vivek Sharma";
    int age = 24;
    string city = "Gorakhpur";
    int pincode = 273004;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"City: "<<city<<endl;
        cout<<"Pincode: "<<pincode<<endl;
    }

};

int main(){

    Person vivek;
    vivek.display();

    return 0;
}