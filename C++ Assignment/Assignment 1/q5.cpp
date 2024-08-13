// 5. Write a C++ program to find simple interest. SI = (P*R*N)/100 With float values
#include<iostream>

using namespace std;

int main(){
    float principal, rate, time, simple_interest;
    cout<<"Enter principle: ";
    cin>>principal;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter time: ";
    cin>>time;

    simple_interest = (principal*rate*time)/100;
    cout<<"Simple Interest is: "<<simple_interest<<endl;

}