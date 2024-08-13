// Q8. Write a C program to find sum of all prime numbers between 1 to n.
#include <stdio.h>
#include<math.h>

int main() {

    int num,i,j,sum=0;
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
            sum+=j;
    }

    printf("Sum of prime no. is: %d",sum);
    return 0;
}