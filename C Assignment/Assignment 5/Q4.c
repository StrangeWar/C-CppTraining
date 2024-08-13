//Write a C program to find maximum between two numbers using switch case.

#include <stdio.h>

int main() {

    int a,b;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);

    switch (a>b)
    {
    case 1:
        printf("a is greater");
        break;
    case 0:
        printf("b is greater");
        break;
    default:
        printf("Invalid input");
        break;
    }

    return 0;
}