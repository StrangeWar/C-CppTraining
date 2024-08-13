// Q2. Write a C program to find sum of first and last digit of a number.

#include <stdio.h>

int main() {

    int num, d,first, last;
    printf("Enter the number: ");
    scanf("%d",&num);
    d=num;
    first=0;
    while(d>=10){
        
        first = d/10;
        d = d/10;

    }
        
    last = num%10;
    printf("sum of first and last digit: %d", first+last);

    return 0;
}