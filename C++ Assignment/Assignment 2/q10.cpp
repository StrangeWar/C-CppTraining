// 10. Write a program to read time in hh:mm:ss and display answer I n only seconds. For Example if user
// enters
// 2:15:30 then it should display 8130 seconds.
// Input:
// Enter Hours: 2
// Enter minutes: 15
// Seconds: 30
// Output: 8130 seconds

#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cout<<"Enter the hours:- ";
    cin>>h;
    cout<<"Enter minutes:- ";
    cin>>m;
    cout<<"Enter the seconds:- ";
    cin>>s;
    cout<<"Time in seconds:- "<<h*3600+m*60+s;
    return 0;
}
