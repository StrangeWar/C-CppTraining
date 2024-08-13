// Function Overriding: Write a program to demonstrate function overriding. Create a base
// class Person with a virtual function introduce(). Derive classes Student and Teacher from
// Person and override the introduce() function. Create objects of Student and Teacher and
// call the introduce() function through a Person pointer.

#include <iostream>
using namespace std;

class Person{
    public:
    virtual void introduce(){
    }
};

class Teacher : public Person{
    public:
    void introduce(){
        cout << "I am a Teacher." << endl;
    }
};
class Student : public Person{
    public:
    void introduce(){
        cout<<"I am a Student." << endl;
    }
};

int main() {

    Person *p;
    p = new Teacher();
    p->introduce();
    p = new Student();
    p->introduce();

    return 0;
}