//Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter the angles: ");
    scanf("%d %d %d", &a,&b,&c);
    
    int sum = a+b+c;

    if(sum==180)
        printf("The triangle is Valid.");
    
    else
        printf("The triangle is Invalid.");
        
    return 0;
}