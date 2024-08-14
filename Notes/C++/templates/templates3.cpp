#include <iostream>
using namespace std;

template <typename T1>
    int TotalCount(T1 a[], int b, T1 c){
        int n;
        for(int i=0;i<b;i++){
            if(c == a[i]){
                n++;
            }
        }
        return n;
    }

int main() {

    int arr[] = {12,34,567,2,2,2,4,4,5,6,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a = TotalCount(arr, n, 2);
    cout<<a<<endl;

    return 0;
}