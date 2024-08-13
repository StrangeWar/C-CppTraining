// Q7. Write a C program to put even and odd elements of array in two separate array.

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i, j,k;
    int *arr, *odd_arr, *even_arr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *) calloc(n,sizeof(int));
    odd_arr = (int *) calloc(n,sizeof(int));
    even_arr = (int *) calloc(n,sizeof(int));

    printf("Enter elements of array : \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        }
    
    printf("Array is: ");
    for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }

    j = 0;
    k = 0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even_arr[j]=arr[i];
            j++;
        }
        else{
            odd_arr[k]=arr[i];
            k++;
            }       
    }

    printf("\nOdd Array is: ");
    for (i = 0; i < n; i++) {
    printf("%d ", odd_arr[i]);
    }

    printf("\nEven Array is: ");
    for (i = 0; i < n; i++) {
    printf("%d ", even_arr[i]);
    }

    free(arr);
    free(odd_arr);
    free(even_arr);

    return 0;
}