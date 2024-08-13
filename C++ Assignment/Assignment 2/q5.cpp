// 5. Write a C++ program to create a class for student to get and print details of a student. Following are the details
// of a student:
// Studid, name ,sem, branch

#include<iostream>
using namespace std;

class Student{
    private:
    int studid;
    string name;
    int sem;
    string branch;

    public:

    void getDetails(){
        cout<<"Enter Student ID: ";
        cin>>studid;
        cout<<"Enter Student Name: ";
        cin>>name;
        cout<<"Enter Semester: ";
        cin>>sem;
        cout<<"Enter Branch: ";
        cin>>branch;
    }

    void print(){
        cout<<"Student ID: "<<studid<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Semester: "<<sem<<endl;
        cout<<"Branch: "<<branch<<endl;
        
    }
};

int main(){

    Student vivek;
    vivek.getDetails();
    vivek.print();

    return 0;
}