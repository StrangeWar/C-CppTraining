//Write a C program to demonstrate the use of logical operators by checking whether a given number lies within a specified range (e.g., between 10 and 20).

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("The %s between 10 and 20.",(num<20 && num >10)? "is":"is not");

    return 0;
}
