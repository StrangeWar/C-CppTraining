//Write a C program to print all odd number between 1 to 100.

#include <stdio.h>

int main() {

    int i= 1;
    printf("Odd no. :- \n");
    while(i<=100){
        printf("%d ",i);
        i+=2;
    }

    return 0;
}