// Write a C program to check whether a number is even or odd using switch case.

#include <stdio.h>

int main() {

    int a;
    printf("Enter the numbers: ");
    scanf("%d",&a);

    switch (a%2==0)
    {
    case 1:
        printf("Even");
        break;
    case 0:
        printf("Odd");
        break;
    default:
        printf("Invalid input");
        break;
    }

    return 0;
}