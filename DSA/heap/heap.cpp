#include <bits/stdc++.h>
using namespace std;

void insert(int A[], int n, int value){
    n = n + 1;
    A[n] = value;
    int i = n - 1;

    while(i>1){
        int parent = (i/2);
        if(A[parent] <= A[i]){
            swap(A[parent], A[i]);
            i = parent;
        }
    else return;
    }
}

void deletion(int A[], int n, int i){
    A[i] = A[n];
    n = n-1;
    i = i-1;
    while(i<n){
        int left = A[(2*i)+1];
        int right = A[(2*i)+2];
        int max = left>right?(2*i+1) : (2*i+2);
        if(A[i] >= A[max]){
            swap(A[i], A[max]);
            i = max;
            }
            else return;
    }
}

void heapify(int A[], int n, int i){
    int largest = i;
    int left = (2*i)+1;
    int right = (2*i)+2;
    if(left <= n && A[left] > A[largest]){
        largest = left;
        if(right <= n && A[right] > A[largest]){
            largest = right;
            swap(A[i], A[largest]);
            heapify(A, n, largest);
        }
    }
}

void buildheap(int A[], int n){
    for(int i = n/2; i >= 1; i--){
        heapify(A, n, i);
        
}

int main() {

    

    return 0;
}