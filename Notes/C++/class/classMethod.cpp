#include<iostream>

using namespace std;

class btech{
    public:
    int non_static_var = 12;
    static int static_var ;

    void non_static_fun(){
        cout<<"I'm a non static function"<<endl;
        cout<<static_var<<endl;
        cout<<non_static_var<<endl;
        }
    static void static_fun(){
        cout<<"I'm a static function"<<endl;
        cout<<static_var<<endl;
        }

};
int btech::static_var = 10;

int main(){
    btech obj ;
    obj.non_static_fun();
    obj.static_fun();
    btech::static_fun();
    return 0 ;
}
