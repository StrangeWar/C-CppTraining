// Write a C program to count number of digits in a number.

#include <stdio.h>

int main() {
    
    int n,digit;
    printf("Enter the no.: ");
    scanf("%d",&n);
    digit=0;
    while(n!=0)
    {
        n=n/10;
        digit++;
    }
    
    printf("No. of digits: %d", digit);
    return 0;
}