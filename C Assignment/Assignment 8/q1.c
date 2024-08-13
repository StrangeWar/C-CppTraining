// Q1. Write a C program to find first and last digit of a number.

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int d=num;
    int first=0;
    while(d>=10){
        
        first = d/10;
        d = d/10;

    }
    printf("First digit: %d\n",first);
    printf("Last digit: %d",num%10);



    return 0;
}