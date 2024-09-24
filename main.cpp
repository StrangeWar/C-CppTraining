#include <bits/stdc++.h>
using namespace std;


int main() {

    int arr[10] = {122,122, 1, 23, 33, 23, 23, 33, 1, 1};

    map<int, int> mp;
    for (int i = 0; i < 10; i++) {
        mp[arr[i]]++;
    
    }

    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}