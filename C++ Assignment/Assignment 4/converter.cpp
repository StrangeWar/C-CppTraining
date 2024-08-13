#include <iostream>
using namespace std;


class Conversion{
    protected:
    int unit;
    
    Conversion(int a){
        unit = a;
    }
};

class A : public Conversion{
    public:
    A(int b):Conversion(b){};
    void convertor(){
        cout << "Converting "<<unit<<"units."<<endl;
        
    }
};

int main() {


    

    return 0;
}