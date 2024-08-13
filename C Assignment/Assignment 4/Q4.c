//Write a C program to check whether a character is uppercase or lowercase alphabet.
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.", ch);
         }

    else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.", ch);
        }
    
    else{
        printf("The input is not a alphabet.");
    }

    return 0;
}