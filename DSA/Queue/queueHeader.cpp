#include <iostream>
#include <queue>
using namespace std;



int main() {

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout << "Size: "<< q.size() << endl;
    cout << "Front: "<< q.front() << endl;
    cout << "Back: "<< q.back() << endl;
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    

    return 0;
}