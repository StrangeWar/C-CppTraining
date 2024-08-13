#include<iostream>
#include<string.h>

class btech{
    public:
    char name[20];
    int roll;
    int age;
};

int main(){
    btech b1;
    strcpy(b1.name,"Vivek Sharma");
    b1.roll = 9009;
    b1.age = 24;
    std::cout<<b1.name<<" "<<b1.roll<<" "<<b1.age;
}