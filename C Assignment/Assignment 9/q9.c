// Q09. Write a C program to insert an element in an array.
#include <stdio.h>

int main() {

    int arr[20], i, n, pos, x;

    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        }
    
    printf("Enter the position to insert the element: \n");
    scanf("%d", &pos);
    printf("Enter the element to insert: \n");
    scanf("%d", &x);

    for(i = n; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = x;
    n = n+1;
    printf("The updated array is: \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
        }

    return 0;
}