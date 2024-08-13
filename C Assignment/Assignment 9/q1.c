// Q01. Write a C program to read and print elements of array.


#include <stdio.h>

int main() {

    int arr[5] = {1,2,3,4,5};
    int i;
    
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}