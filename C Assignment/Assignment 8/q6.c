// Q6. Write a C program to check whether a number is Prime number or not.

#include <stdio.h>
#include<math.h>

int main() {

    int num,i;
    int is_prime = 1;
    printf("Enter the number: ");
    scanf("%d",&num);

    for(i=2;i<=sqrt(num);i++){
        if(num%i==0){
            is_prime = 0;
        }
    }

    if (is_prime)
    {
        printf("%d is a prime number.",num);
    }
    else{
        printf("%d is not a prime number.",num);
    }
    

    return 0;
}