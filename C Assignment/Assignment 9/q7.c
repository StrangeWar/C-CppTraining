// Q07. Write a C program to count total number of negative elements in an array.

#include <stdio.h>

int main() {

    int arr[10] = {1,2,3,4,5,-1,-2,3,-23,67};
    int i,negative=0;
    
    for(i=0;i<10;i++){
        if(arr[i]<0){
        negative++;
        }
    }

    printf("Total negative elements: %d", negative);
    return 0;
}