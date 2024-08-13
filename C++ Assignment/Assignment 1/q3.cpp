// 3. Write a C++ program to input three numbers and display its total and average.

#include<iostream>

using namespace std;

int main(){

    int num1, num2, num3;
    cout<<"Enter num1: "<<endl;
    cin>>num1;
    cout<<"Enter num2: "<<endl;
    cin>>num2;
    cout<<"Enter num3: "<<endl;
    cin>>num3;
    cout<<"Total: "<<num1+num2+num3<<endl;
    cout<<"Average: "<<(num1+num2+num3)/3.0<<endl;

    return 0;
}