//Write a C program to print all alphabets from a to z. - using while loop

#include <stdio.h>

int main() {

    int n =97;
    
    while(n<=122){
        printf("%c ", n);
        n++;
    }

    return 0;
}