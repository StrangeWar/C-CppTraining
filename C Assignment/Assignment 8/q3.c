// Q3. Write a C program to swap first and last digits of a number.

#include <stdio.h>

int main() {

    int num, temp, first, last,d;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    d = num;

    while(d>=10){
        first = d/10;
        d = d/10;
        
    }

    return 0;
}