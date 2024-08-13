// Write a C program to enter a number and print its reverse.

#include <stdio.h>
#include <string.h>
int main() {

    char str[100];
    int i;

    printf("Enter the number: ");
    scanf("%s",str);

    for ( i = strlen(str)-1; i >= 0; i--)
    {
        int n = (str[i] - '0');
        printf("%d",n);
    }
    


    return 0;
}