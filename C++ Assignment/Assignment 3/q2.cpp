// 2. WAP to display addition, subtraction, multiplication and division   of two integers on screen. Declare Class Calculation.
// Write Parameterized constructor for initialize num1 and num2
// Write member function for each operation.

#include<iostream>
using namespace std;


class Calculation{
    private:
    int num1,num2;

    public:

    Calculation(int n1, int n2){
        num1 = n1;
        num2 = n2;
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

    int n1, n2;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;

    Calculation c(n1,n2);
    c.add();
    c.sub();
    c.div();
    c.mul();


    return 0;
}