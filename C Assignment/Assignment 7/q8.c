// Q8. Write a C program to calculate factorial of a number.

#include <stdio.h>

int main() {

    int fact=1, num;
    printf("Enter the number: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d.",num,fact);


    return 0;
}