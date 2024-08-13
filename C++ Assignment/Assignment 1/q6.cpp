// 6. Write a C++ program to calculate area of circle.
// Area = π * r * r

#include<iostream>

using namespace std;

int main(){

    float r;
    cout << "Enter the radius of circle: ";
    cin >> r;
    float area = 3.14 * r * r;
    cout<<"Area: "<<area;

    return 0;
}