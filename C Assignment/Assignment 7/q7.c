// Q7. Write a C program to find all factors of a number.

#include <stdio.h>

int main() {

    int num,i;

    printf("Enter the number: ");
    scanf("%d",&num);

    for ( i = 1; i <= num; i++)
    {
        if(num%i==0){
            printf("%d ",i);
        }
    }
     

    return 0;
}