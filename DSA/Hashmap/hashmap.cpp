#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{

    unordered_map<int, string> m;
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    m[23] = "vivek";

    m.insert(make_pair(12, "sumit"));

    unordered_map<int, string>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        cout << endl;
        it++;
    }

    auto f = m.find(23);
    cout << "find(): " << f->first <<" " << f->second << endl;
    cout << "at(): " << m.at(4) << endl;
    cout << "count(): " << m.count(4) << endl;
    cout << "size(): " << m.size() << endl;



    return 0;
}