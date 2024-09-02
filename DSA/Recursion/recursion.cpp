#include <iostream>
using namespace std;

void fun(int num){
    if(num == 0){
        return;
    }

    cout<<num<<" ";
    fun(num-1);
}

void fun1(int num){
    if(num == 0){
        return;
    }

    fun(num-1);
    cout<<num<<" ";
}

int main() {

    fun(10);
    cout<<endl;
    fun1(10);
    

    return 0;
}