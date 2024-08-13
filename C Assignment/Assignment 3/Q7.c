//Write a C program to enter a four digit number and print all digit.

#include <stdio.h>

int main() {

    int num;
    printf("Enter the 4 digit number: ");
    scanf("%d",&num);

    printf("Thousandth digit: %d\n",num/1000);
    printf("Hundredth digit: %d\n",(num/100)%10);
    printf("tenth digit: %d\n",(num/10)%10);
    printf("once digit: %d",num%10);


    return 0;
}