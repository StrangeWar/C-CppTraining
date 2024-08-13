// Q08. Write a C program to copy all elements from an array to another array.

#include <stdio.h>

int main() {

    int arr1[10], arr2[10], i;
    printf("Enter 10 elements in array 1: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
        }

    for(i=0;i<10;i++){
        arr2[i]=arr1[i];
    }

    printf("Elements of second array is: \n");
    for(i=0;i<10;i++){
        printf("%d ",arr2[i]);
    }

    return 0;
}