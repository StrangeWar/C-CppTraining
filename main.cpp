#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int min = INT_MAX;
    int max = INT_MIN;

    int min2 = INT_MAX, max2 = INT_MIN;

    for(int i = 0; i < n; i++){
        
        if(a[i] > max){
            max2 = max;    
            max = a[i];
        }
        if(a[i] < min){
            min2 = min;
            min = a[i];
        }       
    }

    vector<int> b;
    b.push_back(max2);
    b.push_back(min2);

    return b;

}


int main() {
  vector<int> a;
  a = {1,2,3,4,5,6,7,8,9,10};
  int n = a.size();
  vector<int> c;
  //int c[10];
  c = getSecondOrderElements(n,a);
  cout<< c[0] << c[1] ;
  return 0;
}
