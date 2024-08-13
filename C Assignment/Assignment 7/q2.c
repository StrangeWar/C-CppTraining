// Q2. Write a C program to check whether a number is palindrome or not.


#include <stdio.h>
#include <string.h>
int main() {

    char str[100];
    int i,j;
    char reverse[100];

    int len = strlen(str);
    printf("Enter the number: ");
    scanf("%s",str);

    for ( i = len-1,j=0 ; i>j; i--,j++)
    {
        if(str[i] != str[j]){
            printf("The number is not palindrome.");
            return 0;
        }
    }
    
    printf("The no. is palindrome.");


    return 0;
}