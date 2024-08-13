// Q6. Write a C program to find power of a number using for loop.

#include <stdio.h>

int main() {

    int power, num, exp=1;
    int i;

    printf("Enter the number and power: ");
    scanf("%d %d",&num,&power);

    for (i = 0; i < power;i++)
    {
        exp = exp*num;
    }
    
    printf("The value is: %d.",exp);

    return 0;
}