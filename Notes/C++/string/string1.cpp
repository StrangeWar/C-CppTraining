#include <iostream>
using namespace std;



int main() {

    string x = "vivek";
    string y = x + " sharma";
    cout << y << endl;
    cout << x << endl;
    cout << "length(): " << x.length() << endl;
    cout << "size(): " << x.size() << endl;
    cout << "append(): " << x.append(" sharma") << endl;
    cout << "compare(): " << x.compare(y) <<endl;
    cout << "substr(): " << x.substr(0, 4) << endl;
    cout << "find(): " << x.find("v") << endl;
    cout << "erase(): " << x.erase(6, 2) << endl;
    cout << "insert(): " << x.insert(6, "sh") << endl;
    cout << "replace(): " << x.replace(0, 5, "Ritik") << endl;
    cout << "front(): " << x.front() << endl;
    cout << "back(): " << x.back() << endl;
    cout << "begin(): " << *x.begin() << endl;
    cout << "end(): " << *(x.end()-1) << endl;


    return 0;
}