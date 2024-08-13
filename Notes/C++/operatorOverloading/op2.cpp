#include <iostream>
using namespace std;

class Company{

    public:
    int cc;
    static int objc;

    Company(int c){
        cc = c;
    }
    
    Company operator+(Company &obj){
        return cc + obj.cc;
    }
    void print(){
        cout<<"car no.: "<<++objc<<endl;
        cout<<"cc of bike is: "<<cc<<endl;

    }
};

int Company::objc;

int main() {
    Company c1(2100);
    Company c2(3000);
    Company c3 = c1+c2;
    c1.print();
    c2.print();
    c3.print();
    

    return 0;
}