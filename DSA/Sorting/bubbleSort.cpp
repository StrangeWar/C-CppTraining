#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    if(n == 1){
        return;
    }

    int didSwap = 0;

    for(int j = 0; j < n-2; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            didSwap = 1;
        }
    }

    if(didSwap == 0)
        return;
    
    bubbleSort(arr, n-1);

}

int main() {

    vector<int> arr = {1, 32,1, 34,2, 56, 35, 2, 45,65};
    int n = arr.size();
    bubbleSort(arr, n);

    for(auto i: arr){
        cout << i << " ";
    }

    

    return 0;
}