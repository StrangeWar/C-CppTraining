#include <iostream>
using namespace std;

namespace myspace{
    class btech{
        public:
        int rollno = 12;
        string name = "vivek";
        float cgpa = 9.9;

        public:
            btech(){
                cout << "I am myspace class." << endl;
            }
    };
}



int main() {

    myspace::btech b1;

    cout<<"Btech---------------->"<<endl;
    cout<<"Name: "<<b1.name<<endl;
    cout<<"roll: "<<b1.rollno<<endl;
    cout<<"cgpa: "<<b1.cgpa<<endl<<endl;

    return 0;
}