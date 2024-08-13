// • Runtime Polymorphism: Create a base class Employee with a virtual function
// calculatesalary ( ) . Derive two classes Manager and Engineer that override the
// calculatesalary ( ) function. Create an array of Employee* and store objects of Manager and
// Engineer. Iterate through the array and call the calculatesalary ( ) function on each object.

#include <iostream>
using namespace std;

class Employee{
    public:
    virtual double calculatesalary() = 0;
};

class Manager: public Employee{
    public:
    double calculatesalary(){
        return 10000.0;
    }
};

class Engineer : public Employee{
    public:
    double calculatesalary(){
        return 500000;
    }
};


int main() {

    Employee *e1[5] = {
        new Manager(),
        new Engineer(),
        new Manager(),
        new Engineer(),
        new Manager()
    };

    for(int i = 0; i<5; i++){
        cout<<"Salary: "<<e1[i]->calculatesalary()<<endl;
    }
    

    return 0;
}