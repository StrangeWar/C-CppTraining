#include <iostream>
using namespace std;

int i=0;
int linearSearch(int arr[], int val, int size){

    if(size == 0)
        return -1;

    if(arr[0] == val){
        return i;
    }
    i++;
    return linearSearch(arr+1, val, size-1);

}

void reverse(string a, int size){
    if(size == -1)
        return ;

    cout<<(a[size])<<"";
    return reverse(a, size-1);
    
}


int bineary_search(int arr[], int key, int l, int r){
    if(l < r){
        int mid = (l + r) / 2;
        if(arr[mid] == key)
            return mid;
        
        if(arr[mid] > key){
            return bineary_search(arr, key, l, mid-1);
        }

        if(arr[mid] < key){
            return bineary_search(arr, key, mid+1, r);
        }

    }
    return -1;
}


int main() {

    int arr[10] = {12, 23 ,34, 45, 56, 67, 78, 89, 90, 200};

    cout << "Reverse String: "<<endl;
    reverse("vivek sharma", 4);
    cout<<endl<<endl;

    cout << "Linear Search: "<<endl;
    cout << "Position of element in the array is: " <<linearSearch(arr, 90, 10)<<endl<<endl;


    cout << "Binary Search:"<<endl;

    cout<<"Position of element in the array is: " << bineary_search(arr, 90, 0, 10);


    return 0;
}