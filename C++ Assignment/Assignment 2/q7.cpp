// 7. Write a C++ program to create a class for student to get and print details of a student. Following are the details
// of a student:
// Student_id, Name, Branch,Sub1_mark,Sub2_mark,Sub3_mark,Sub4_mark,Sub5_mark
// Write member function to calculate Percentage, Class (Dist,First,Second,Pass ) of student

#include<iostream>
using namespace std;
class student{
    private:
    int student_id;
    string name;
    string branch;
    int sub1_mark,sub2_mark,sub3_mark,sub4_mark,sub5_mark;
    
    public:
    void get_details(){
        cout<<"Enter Student_id: ";
        cin>>student_id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter branch: ";
        cin>>branch;
        cout<<"Enter marks of subject 1,2,3,4 & 5: ";
        cin>>sub1_mark>>sub2_mark>>sub3_mark>>sub4_mark>>sub5_mark;
        }
    
    void print_details(){
        cout<<"Student_id: "<<student_id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"Subject 1 mark: "<<sub1_mark<<endl;
        cout<<"Subject 2 mark: "<<sub2_mark<<endl;
        cout<<"Subject 3 mark: "<<sub3_mark<<endl;
        cout<<"Subject 4 mark: "<<sub4_mark<<endl;
        cout<<"Subject 5 mark: "<<sub5_mark<<endl;
        }
    
    void calc_percentage(){
        int total = sub1_mark + sub2_mark + sub3_mark + sub4_mark + sub5_mark;
        float percentage = (total/5);
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

int main(){
   
    student s1;
    s1.get_details();
    s1.print_details();
    s1.calc_percentage();
    return 0;
}