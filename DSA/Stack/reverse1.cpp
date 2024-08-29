#include <iostream>
#include <stack>
using namespace std;


int main() {

    stack <string> s;
    string s1 = "Hello! How are you?";

    string s2 = "";
    for(int i = 0; i<s1.length(); i++){
        if(s1[i] != ' '){
            s2 += s1[i];
        }
        else{
            s.push(s2);
            s2 = "";
        }
    }
    s.push(s2);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}