#include <iostream>
#include <stack>
using namespace std;


int main() {

    stack <char> s;

    string s1 = "Hello! How are you?";

    for(int i = 0; i<s1.length(); i++){
        s.push(s1[i]);
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}