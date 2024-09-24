#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int j = i;

        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main() {

    vector <int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    insertionSort(arr);

    for(auto i: arr){
        cout << i << " ";
    }
    

    return 0;
}