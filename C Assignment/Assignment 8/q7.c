// Q7. Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>
#include<math.h>

int main() {

    int num,i,j;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num < 2) {
        printf("No prime numbers in the range.");
        return 0;
    }

    for(j=2;j<=num;j++){
        int is_prime = 1;
        for(i=2;i<=sqrt(j);i++){
            if(j%i==0) {
                is_prime = 0;
                break;
            }
        }

        if(is_prime)
            printf("%d ",j);
    }

    return 0;
}