#include <iostream>
using namespace std;

template <class A, class B, class C>
auto sum(A a, B b, C c){
    return a+b+c;
}


int main() {

    cout<<sum(12,23,43)<<endl;
    cout<<sum(34,12,23)<<endl;
    cout<<sum(12,12,12)<<endl;


    return 0;
}