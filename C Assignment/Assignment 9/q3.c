// Q03. Write a C program to find sum of all array elements.

#include <stdio.h>

int main() {

    int arr[5] = {1,2,3,4,5};
    int i,sum=0;
    
    for(i=0;i<5;i++){
        sum += arr[i];
    }

    printf("Sum of array: %d",sum);
    return 0;
}