//Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>

int main() {

    int i=1;
    int n, sum;
    printf("Enter the no. : ");
    scanf("%d", &n);
    while(i<=n){
        sum+=i;
        i++;
    }

    printf("%d",sum);

    return 0;
}