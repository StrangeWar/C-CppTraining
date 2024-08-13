//Write a C program to check whether a number is positive, negative, or zero using conditional operator.

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("The number is %s.",(num > 0)?"positive":(num<0)?"negative":"zero");

    return 0;
}