// 9. Write a program which accept temperature in Farenheit and print it in centigrade.

#include <iostream>

using namespace std;

int main(){
    float fah, cent;
    cout << "Enter temperature in Farenheit: ";
    cin >> fah;
    cent = (fah - 32) * 5/9;
    cout << "Temperature in centigrade: " << cent << endl;
    return 0;
}