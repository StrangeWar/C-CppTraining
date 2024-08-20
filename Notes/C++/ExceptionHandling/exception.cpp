#include <iostream>
using namespace std;


int main() {

    try
    {
        int age;
        cout<<"Enter the age: ";
        cin>>age;

        if(age<=0){
            throw 1;
        }

        if(age > 100){
            throw 2;
        }

        cout<<"you can vote"<<endl;
    }

    catch(int e)
    {
        if(e==1)
            cout<<"Invalid age"<<endl;
        
        if(e==2)
            cout<<"Age is more than 100"<<endl;
    }
    

    return 0;
}