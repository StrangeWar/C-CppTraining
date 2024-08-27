#include <iostream>
#include <stack>
using namespace std;



int main() {

    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);

    cout << s.top() <<endl;
    cout<<"size: "<< s.size()<<endl;

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    

    return 0;
}