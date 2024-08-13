// 6. Write a program as per following details
// Create one base class PERSON with following data members
// Name, College name
// Create one sub class STUDENT derived from PERSON with following data members
// Student_id , Marks of five subject, percentage Member function: showResult( )-
// Calculate total,percentage and finding class(Dist,First,second,pass)
// Create one sub class EMPLOYEE derived from PERSON with following data members
// Emp_id, qualification , basic salary
// Member function to calculate Net salary and print Net salary
// DA=189% of Basic salary
// HRA=10% of Basic salary
// TA=500
// Income tax=5 % of basic salary, if basic salary >50000
// Income tax=0, if Basic salary <=50000
// Netsalary=(basicsalary+da+hra+ta) - income tax
// Write appropriate setter function in each class and display detail of student and
// employee in main.

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    string college_name;

    void get_details(){
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter College Name: ";
        getline(cin, college_name);
        cin.ignore();
    }

    void print_details(){
        cout<<"Name: "<<name<<endl;
        cout<<"College Name: "<<college_name<<endl;
    }


};

class Student : public Person{
    private:
    int student_id;
    int sub1_mark,sub2_mark,sub3_mark,sub4_mark,sub5_mark;
    
    public:
    void get_details(){
        cout<<"---------------------Student-----------------------------"<<endl;
        Person::get_details();
        cout<<"Enter Student_id: ";
        cin>>student_id;
        cout<<"Enter marks of subject 1,2,3,4 & 5: ";
        cin>>sub1_mark>>sub2_mark>>sub3_mark>>sub4_mark>>sub5_mark;
        cout<<"Student_id: "<<student_id<<endl;
        cout<<"Subject 1 mark: "<<sub1_mark<<endl;
        cout<<"Subject 2 mark: "<<sub2_mark<<endl;
        cout<<"Subject 3 mark: "<<sub3_mark<<endl;
        cout<<"Subject 4 mark: "<<sub4_mark<<endl;
        cout<<"Subject 5 mark: "<<sub5_mark<<endl;
        cin.ignore();
        }
    
    void show_result(){

        cout<<"---------------------Student-----------------------------"<<endl;
        Person::print_details();
        int total = sub1_mark + sub2_mark + sub3_mark + sub4_mark + sub5_mark;
        float percentage = (total/5);
        cout<<"Total marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;

        if(percentage>90){
            cout<<"Class: Distinction"<<endl;
        }
        else if(percentage>75){
            cout<<"Class: First Class"<<endl;
            }
        else if(percentage>65){
            cout<<"Class: Second Class"<<endl;
        }
        else{
            cout<<"Class: Pass"<<endl;
        }

    }

};

class Employee : public Person{
    private:
        string qualification;
        int empcode;
        float basic;
        float da;
        float hra;
        float ta = 500;

    public:

        void get_details(){
            cout<<"---------------------Employee-----------------------------"<<endl;
            Person::get_details();
            cout<<"Enter employee code: ";
            cin>>empcode;
            cout<<"Enter qualification: ";
            cin>>qualification;
            cout<<"Enter basic salary: ";
            cin>>basic;
            cin.ignore();
        }


        void net_salary(){
            cout<<"---------------------Employee-----------------------------"<<endl;
            Person::print_details();
            da = 18.9*basic;
            hra = 0.1*basic;

            float tax=0;
            if(basic > 50000){
                tax = 0.05*basic;
            }

            cout<<"Emp ID: "<<empcode<<endl; 
            cout<<"Qualification: "<<qualification<<endl;
            cout<<"Net Salary: "<<basic+da+hra+ta-tax<<endl;
        }
};

int main() {

    Student s;
    Employee e;

    s.get_details();
    s.show_result();

    e.get_details();
    e.net_salary();

    

    return 0;
}