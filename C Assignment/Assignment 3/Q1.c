//Write a C program to find maximum between two numbers using conditional operator.

#include <stdio.h>

int main() {

    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Maximum number is: %d", (a>b)?a:b);

    return 0;
}