// addition of imaginary number.

#include<iostream>

using namespace std;

class Imaginary{
    private:
    int x;
    int y;

    public:

    void setData(int v1, int v2){
        x = v1;
        y = v2;
    }

    void setSum(Imaginary ob1, Imaginary ob2){
        x = ob1.x + ob2.x;
        y = ob1.y + ob2.y;
    }

    void printSum(){
        cout<<"Sum of imaginary numbers is "<<x<<" + "<<y<<"i"<<endl;
    }
};

int main(){

    Imaginary n1,n2, sum;
    n1.setData(5,7);
    n2.setData(3,9);

    sum.setSum(n1,n2);
    sum.printSum();

}