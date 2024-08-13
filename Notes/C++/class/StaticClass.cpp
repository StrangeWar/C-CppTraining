#include<iostream>

using namespace std;

class btech{

    public:
    int rollno=9009;
    int age=24;
    float cgpa=7.8;
    static int room;
};

int btech::room = 252;

int main()
{
    btech vivek, anurag;

    anurag.rollno = 1312;

    //anurag.room = 206;
    cout<<"vivek room no. "<<vivek.room<<endl;
    cout<<"vivek roll no. "<<vivek.rollno<<endl;
    cout<<"anurag room no. "<<anurag.room<<endl;
    cout<<"anurag roll no. "<<anurag.rollno<<endl;


    return 0;
}