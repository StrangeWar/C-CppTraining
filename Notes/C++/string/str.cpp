#include <iostream>
using namespace std;



int main() {

    string str;
    char ch;
    int count=0;

    cout << "Enter a string: ";
    getline(cin, str);

    cout<<"Enter the character: ";
    cin>>ch;

    for(int i = 0; i<str.length(); i++){
        if (str[i]==ch)
            count++;
    }

    cout<<"No of character "<<ch<<" : "<<count<<endl;

    return 0;
}