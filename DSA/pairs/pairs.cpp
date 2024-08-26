#include <iostream>
using namespace std;



int main() {

    pair <int , char> p[5];
    pair <int , char> q[26];
    pair <int , char> s[252];


    // p[0].first = 10;
    // p[0].second = 'a';
    // p[1].first = 20;
    // p[1].second = 'b';
    // p[2].first = 30;
    // p[2].second = 'c';
    // p[3].first = 40;
    // p[3].second = 'd';
    // p[4].first = 50;
    // p[4].second = 'e';

    // cout << p[0].first << " " << p[0].second << endl;
    // cout << p[1].first << " " << p[1].second << endl;
    // cout << p[2].first << " " << p[2].second << endl;
    // cout << p[3].first << " " << p[3].second << endl;
    // cout << p[4].first << " " << p[4].second << endl;

    // int i = 0;
    // char ch = 'A';

    // while (i != 26)
    // {
    //     q[i] = make_pair(i+1, ch);
    //     i++;
    //     ch++;
    // }
    
    // i = 0;
    // while(i != 26){
    //     cout << q[i].first << " " << q[i].second << endl;
    //     i++;
    // }

    int i = 0;
    char ch = NULL;

    while (i != 252)
    {
        s[i] = make_pair(i+1, ch);
        i++;
        ch++;
    }
    
    i = 0;
    while(i != 252){
        cout << s[i].first << " " << s[i].second << endl;
        i++;
    }



    return 0;

}