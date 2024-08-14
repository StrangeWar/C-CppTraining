#include <iostream>
using namespace std;

namespace gniot{
    template <typename T, typename U>
    class btech{
        private:
        T a;
        U b;

        public:
        btech(T c, U d){
            a = c;
            b = d;
        }
        
        void print(){
            cout << a << endl << b << endl;
        }
    };
}

int main() {

    gniot::btech<string, int> obj("Vivek", 20125);
    obj.print();
    
    gniot::btech<int, float> obj1(123, 124.23);
    obj1.print();

    return 0;
}