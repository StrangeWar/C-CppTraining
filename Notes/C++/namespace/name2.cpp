#include <iostream>
using namespace std;

namespace btech{
    string name = "ritik";
    int roll = 979;
    float cgpa = 9;

    namespace 
    {
        string name2 = "vivek";
        int roll2 = 980;
        float cgpa2 = 8.8;
    } 
    
}

int main() {

    cout<<"Name: "<<btech::name<<endl;
    cout<<"Roll: "<<btech::roll<<endl;
    cout<<"CGPA: "<<btech::cgpa<<endl;

    cout<<"Name: "<<btech::name2<<endl;
    cout<<"Roll: "<<btech::roll2<<endl;
    cout<<"CGPA: "<<btech::cgpa2<<endl;
    return 0;
}