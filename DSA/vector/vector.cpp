#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {12, 3, 43, 4, 43525, 457, 8, 4, 68, 759};

    vector<int> z;
    z.push_back(12);
    z.push_back(13);
    z.push_back(14);
    z.push_back(15);
    z.push_back(16);
    z.push_back(17);
    
    int i = 0;
    while( i!= z.size()){
        
        cout<<z[i]<<" ";
        i++;
    }
    
    cout<<endl;

   for(auto i: v){
    cout<<i<<" ";
   }

    return 0;
}