#include <iostream>
#include <vector>
#include <map>
using namespace std;



int main() {

    map<int, int> m;

    vector<int> arr = {12, 19, 8 ,7, 13, 40};

    for(int i=0; i<arr.size(); i++){
        m.insert(make_pair(arr[i], i));
    }
    
    map<int, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        cout << endl;
        it++;
    }

    return 0;
}