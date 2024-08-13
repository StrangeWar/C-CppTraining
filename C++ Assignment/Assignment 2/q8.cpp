// 8. C++ program to create a class for Employee to get and display following Employee information:

// Empcode, Basicsalary
// Write Member function to calculate Net salary
// DA=174% of Basic salary
// HRA=10% of Basic salary
// TA=500
// Income tax=5 % of basic salary , if baic salary > 50000
// Income tax=0 , if Basic salary <= 50000
// Netsalary=(basic salary + da + hra + ta) – income tax

#include <iostream>
using namespace std;

class Employee{
    private:
        int empcode;
        float basic;
        float da;
        float hra;
        float ta = 500;

    public:
        void netSalary(int emp, float sal){
            empcode = emp;
            basic = sal;
            da = 17.5*basic;
            hra = 0.1*basic;

            float tax=0;
            if(basic > 50000){
                tax = 0.05*basic;
            }

            cout<<"Emp ID: "<<empcode<<"  Net Salary: "<<basic+da+hra+ta-tax<<endl;
        }
};

int main() {

    Employee e1, e2;
    e1.netSalary(123,50000);
    e2.netSalary(124,40000);


    return 0;
}