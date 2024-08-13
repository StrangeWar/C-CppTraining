// Q5. Write a C program to calculate product of digits of a number

#include <stdio.h>

int main() {

    int num,d;
    int product = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
    d = num;
    while(d>0){
        
        product = product*(d%10);
        d = d/10;
    }

    printf("product of digits are: %d",product);

    return 0;
}