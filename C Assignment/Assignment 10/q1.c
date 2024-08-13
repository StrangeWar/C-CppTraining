// Q1. Write a C program to count frequency of each element in an array.

#include<stdio.h>

int main() {

    int arr[5],freq[10][2]={{},{0}},i,j;

    printf("Enter 10 elements in array 1: \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        }
    
    for (i = 0; i < 5; i++) {
        freq[i][0]=arr[i];
        for (j = i + 1; j < 5; j++) {
            if (freq[i][0] == arr[j]) {
                freq[i][1]++;
            }
        }
    }

    printf("\nOdd Array is: ");
    for (i = 0; i < 5; i++) {
    printf("%d %d", arr[i],freq[i][1]);
    }



    


    return 0;
}