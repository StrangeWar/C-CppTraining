//Write a C program to swap two numbers using bitwise operator.

#include <stdio.h>

int main() {

    int x ,y;

    printf("Enter the values: ");
    scanf("%d %d", &x,&y);
    printf("x = %d\n",x);
    printf("y = %d\n",y);

    x = x^y;
    y = x^y;
    x = x^y;

    printf("x = %d\n",x);
    printf("y = %d",y);

    return 0;
}