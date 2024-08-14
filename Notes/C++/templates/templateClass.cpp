#include <iostream>
using namespace std;

template <typename T, typename U, typename X>

class btech{

    T aa;
    U bb;
    X cc;
    public:
        btech(T a, U b, X c){
            cout<<"I am btech class"<<endl;
            aa= a;
            bb= b;
            cc= c;
        }

        void print(){
            cout<<aa<<endl;
            cout<<bb<<endl;
            cout<<cc<<endl;
            
        }
};

int main() {

    btech <string, long , float> s1("Vivek", 730924, 9.8);
    btech <int, int, string> s2(24, 987, "gkp");

    s1.print();
    s2.print();

    

    return 0;
}