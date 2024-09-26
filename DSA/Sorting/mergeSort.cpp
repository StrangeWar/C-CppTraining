#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while(left<=mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
        
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }

}

void mergeSort(vector<int> &arr, int low, int high){
    if(low >= high)
        return ;
    
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main() {

    vector<int> arr = {12, 32, 1, 5, 6, 7, 3, 87, 34, 23, 23};
    int n = arr.size();

    mergeSort(arr, 0, n);

    for(auto it: arr){
        cout<<it<<" ";
    }


    return 0;
}