// Q4. Write a C program to calculate sum of digits of a number.

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int d=num;
    int sum = 0;
    while(d>0){
        
        sum += d%10;
        d = d/10;
    }

    printf("Sum of digits are: %d",sum);

    return 0;

}