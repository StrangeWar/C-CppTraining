//Write a C program to find the absolute value of a number using conditional operator.

#include <stdio.h>

int main() {

    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("The absolute value of %d is %d.",num,(num>0)?num:(-1*num));
    return 0;
}