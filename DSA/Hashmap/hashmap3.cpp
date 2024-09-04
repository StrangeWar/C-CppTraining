#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {

    int arr[] = {12, 19, 8 ,7, 13, 40};

    vector<pair<int , int>> v ;

    int i = 0;
    while(i != 6){
        v.push_back(make_pair(arr[i], i));
        i++;
    }
    
   sort(v.begin(), v.end());

   for(auto i:v){
    cout<<i.first<<" "<<i.second<<endl;
   }

    return 0;
}