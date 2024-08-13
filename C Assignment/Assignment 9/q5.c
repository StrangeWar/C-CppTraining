// Q05. Write a C program to find second largest element in an array.
#include <stdio.h>

int main() {

    int arr[10]={1,34,65,2,7,8,4,89,78,445};
    int i, max, second_max;
    max = arr[0];
    second_max = arr[0];
    for(i=1; i<10; i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
            }
        else if(arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
            }
    }

    printf("The max element of the array is %d",second_max);

    return 0;
}