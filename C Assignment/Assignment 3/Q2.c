// Write a program to find maximum between three numbers using conditional operator.

#include <stdio.h>

int main() {

    int a,b,c;

    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The maximum number is: %d", (a>b)?((a>c)?a:c):((b>c)?b:c));



    return 0;
}