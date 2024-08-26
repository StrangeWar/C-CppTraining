#include <iostream>
#include <vector>
using namespace std;



int main() {

    vector <int> v = {12, 3, 43, 4, 43525, 457, 8, 4, 68, 759};

    // v.clear();
    if(v.empty()){
        cout << "The vector is empty." << endl;
    }
    else{
        cout << "The vector is not empty." << endl;
    }

    cout << "at(): " << v.at(4) << endl;
    cout << "back(): " << v.back() << endl;
    cout << "front(): " << v.front() << endl;
    cout << "size(): " << v.size() << endl;
    cout << "begin(): " << *v.begin() << endl;
    cout << "end(): " << *(v.end()-1) << endl;
    cout << "max_size(): " << v.max_size() << endl;
    cout << "capacity(): " << v.capacity() << endl;
    cout << "sizeof(v): " << sizeof(v) << endl;
    


    




    return 0;
}