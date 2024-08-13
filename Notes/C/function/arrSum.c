#include <stdio.h>

int arrSum(int arr[], int len){

    if(len==0)
        return 0;
    
    return arr[len-1]+arrSum(arr,len-1);

}

int main() {

    int arr[5] = {10,20,30,40,50};

    int sum = arrSum(arr, 5);

    printf("sum: %d", sum);

    return 0;
}