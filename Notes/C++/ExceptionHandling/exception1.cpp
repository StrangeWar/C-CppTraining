#include <iostream>
#include <stdexcept>
using namespace std;



int main() {

    try{
        int num;
        cout<<"Enter integer: ";
        cin>>num;

        if(cin.fail()){
            throw runtime_error("invalid input.");
        }
        cout<<"you enter num: "<<num<<endl;
    }   


    catch(exception &e){
        cout<<"Error message is: "<<e.what() << endl;
    } 

    return 0;
}