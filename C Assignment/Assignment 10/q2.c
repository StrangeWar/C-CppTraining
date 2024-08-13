// Q2. Write a C program to print all unique elements in the array.

#include <stdio.h>

int main() {

    int n,u;
    int arr[20];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter he elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        for(int i=1;i<n;i++){
            
            if(arr[j]!=arr[i]){
                u=arr[j];
            }
        }   
        printf("%d ",u);
    }
    

    return 0;
}