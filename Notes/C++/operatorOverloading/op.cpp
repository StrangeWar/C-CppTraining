#include <iostream>
using namespace std;

class birthday{
    int age;
    int year = 60;

    public:
    birthday(int a){
        age = a;

    }

    void operator++(){
        age = age+1;
    }

    void operator++(int){
        age = age+1;
    }

    void operator--(){
        year = year - age;

    }
    void operator--(int){
        year = year - age;

    }
    void print(){
        cout << "After birthday Age: " << age << endl;
        cout<< "Life left: "<<year<<endl;
    }

};

int main() {
    birthday vivek(23);
    vivek++;
    ++vivek;
    --vivek;
    vivek.print();
    

    return 0;
}