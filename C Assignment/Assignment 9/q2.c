// Q02. Write a C program to print all negative elements in an array.

#include <stdio.h>

int main() {

    int arr[10] = {1,2,3,4,5,-1,-2,3,-23,67};
    int i;
    
    for(i=0;i<10;i++){
        if(arr[i]<0){
        printf("%d\n",arr[i]);
        }
    }
    return 0;
}