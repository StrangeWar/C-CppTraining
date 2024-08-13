// 8. C++ program to create a class for Employee to get and display following Employee information
// using constructor:
// Empcode,Emp name, Basicsalary

#include <iostream>
using namespace std;

class Employee
{
private:
    int empcode;
    string name;
    int basicsalary;

public:
    Employee(int e, string n, int b)
    {
        empcode = e;
        name = n;
        basicsalary = b;

        cout<<empcode<<endl;
        cout<<name<<endl;
        cout<<basicsalary<<endl;

    }
};

int main(){
    Employee e1(101,"Rahul",50000);
    Employee e2(102, "Vivek", 1000000);
    return 0;
}