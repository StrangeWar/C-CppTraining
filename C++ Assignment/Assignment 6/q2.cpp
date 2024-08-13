// • Pure Virtual Functions and Abstract Classes: Define an abstract class Animal with a pure
// virtual function sound ( ) . Create two derived classes Dog and cat that override the sound ( )
// function. Write a main function to demonstrate polymorphism by creating objects of Dog and
// cat and calling the sound ( ) function through base class pointers.

#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound()=0;

};

class Dog: public virtual Animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};

class Cat: public virtual Animal{
    public:
    void sound(){
        cout<<"Cat Meows"<<endl;
    }
};

int main() {

    Animal *obj;
    obj = new Dog();
    obj->sound();
    obj = new Cat();
    obj->sound();
    

    return 0;
}