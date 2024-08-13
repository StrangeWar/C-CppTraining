// Q10. Write a C program to delete an element from an array at specified position.

#include <stdio.h>

int main() {

    int arr[20], i, n, pos;

    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        }
  
    printf("Enter the position to delete: \n");
    scanf("%d", &pos);

    for(i = pos; i<n; i++){
        arr[i-1] = arr[i];
    }
    n = n-1;
    printf("The updated array is: \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
        }

    return 0;
}