// 3. WAP to display addition, subtraction, multiplication and division of two integers on screen.
// Declare Class Calculation
// Declare data member num1 and num2 in Private section
// Write member function for initialize num1 and num2
// Write member function for each operation.

#include<iostream>
using namespace std;


class Calculation{
    private:
    int num1,num2;

    public:

    void get(){
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
    }

    void add(){
        cout<<"Addition: "<<num1+num2<<endl;
        
    }

    void sub(){
        cout<<"Subtraction: "<<num1-num2<<endl;
    }

    void div(){
        if(num2!=0)
        cout<<"Division: "<<num1/num2<<endl;
        else
        cout<<"Error! Division by zero is not allowed.";
    }

    void mul(){
        cout<<"Multiplication: "<<num1*num2<<endl;
    }
};

int main(){

    Calculation c;
    c.get();
    c.add();
    c.sub();
    c.div();
    c.mul();


    return 0;
}