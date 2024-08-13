// 4. Write a C++ program to enter Day Temperature of 5 cities of Uttar pradesh. Display average temperature.

#include<iostream>

using namespace std;

int main()
{
    int gkp,lko,rbl,gbn,ayodhya;

    cout<<"Enter the temp of Gkp: ";
    cin>>gkp;
    cout<<"Enter the temp of Lko: ";
    cin>>lko;
    cout<<"Enter the temp of Rbl: ";
    cin>>rbl;
    cout<<"Enter the temp of Gbn: ";
    cin>>gbn;
    cout<<"Enter the temp of Ayodhya: ";
    cin>>ayodhya;

    cout<<"Average temp of the cities: "<<(gkp+lko+rbl+gbn+ayodhya)/5.0;

    return 0;
}
