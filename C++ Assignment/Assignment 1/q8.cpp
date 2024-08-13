// 8. Write a C++ program to input marks of five subjects of a student and calculate total marks and percentage.

#include <iostream>

using namespace std;
int main() {
    int math,physics,english,chemistry,history, total = 0, percentage = 0;
    cout << "Enter marks of math, physics, english,chemistry,history: ";
    cin >> math >> physics >> english >> chemistry >> history;
    cout << "Total marks = " << math + physics + english + chemistry + history << endl;
    total = math + physics + english + chemistry + history;
    cout << "Percentage = " << (total / 5.0)<< endl;


    return 0;
}