//Write a C program to check whether a number is positive, negative or zero using switch case.

#include <stdio.h>

int main() {

    int a;
    printf("Enter the numbers: ");
    scanf("%d",&a);

    switch (a==0)
    {
    case 1:
        printf("Zero");
        break;
    case 0:
        switch (a<0)
        {
        case 1:
            printf("negative");
            break;
        case 0:
            printf("positive");
            break;
        }
        break;
    default:
        printf("Invalid input");
        break;
    }

    return 0;
}