// 7. Write a C++ program to read two numbers from user and print their addition, subtraction,multiplication and division on screen.

#include<iostream>

using namespace std;

int main(){
    float a,b;
    cout<<"Enter the values:";
    cin>>a>>b;
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    if(b!=0){
        cout<<"Division: "<<a/b<<endl;
    }
    else{
        cout<<"Error: Division by zero is not allowed."<<endl;
        }
    
    return 0;
}