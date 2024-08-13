// 9. Do above program for 5 number of Employees.( Using Array of Object )

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
        Employee(int emp, float sal){
            empcode = emp;
            basic = sal;
        }
        void netSalary(){
            da = 17.5*basic;
            hra = 0.1*basic;

            float tax=0;
            if(basic > 50000){
                tax = 0.05*basic;
            }

            cout<<"Emp ID: "<<empcode<<"  Net Salary: "<<(basic+da+hra+ta)-tax<<endl;
        }
};

int main() {

    Employee Emp[4] = {
        Employee(123,20000),
        Employee(456,30000),
        Employee(789,40000),
        Employee(101,50000)

    };

    for(int i=0;i<4;i++){
        Emp[i].netSalary();
    }


    return 0;
}
