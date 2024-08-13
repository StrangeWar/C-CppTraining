#include <iostream>
#include "file.h"

using namespace std;

int main() {
    cout<<"Btech---------------->"<<endl;
    cout<<"Name: "<<btech::name<<endl;
    cout<<"roll: "<<btech::roll<<endl;
    cout<<"cgpa: "<<btech::cgpa<<endl<<endl;

    cout<<"BCA------------------>"<<endl;
    cout<<"Name: "<<btech::bca::name<<endl;
    cout<<"roll: "<<btech::bca::roll<<endl;
    cout<<"cgpa: "<<btech::bca::cgpa<<endl;

    return 0;
} 