// Q6. Write a C program to find reverse of an array.

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i, j;
    int *arr, *rev_arr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *) malloc(n*sizeof(int));
    rev_arr = (int *) malloc(n*sizeof(int));

    printf("Enter elements of array : \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        }
    
    printf("Array is: ");
    for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }

    
    for ( i = n-1; i >= 0; i--)
    {
        rev_arr[n-i-1] = arr[i];
    }
    
    printf("\nReversed array: ");
    for (i = 0; i < n; i++) {
    printf("%d ", rev_arr[i]);
    }


    free(arr);
    free(rev_arr);

    arr = NULL;
    rev_arr = NULL;

    return 0;
}