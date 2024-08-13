// Q9. Write a C program to find all prime factors of a number.

#include<stdio.h>
#include<math.h>

int main()
{

    int num, i,j;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(j=2;j<=num;j++){
    int is_prime = 1;
    for(i=2;i<=sqrt(j);i++){
        if(j%i==0) {
            is_prime = 0;
            break;
        }
    }

    if(is_prime){

        if(num%j==0)
            printf("%d ",j);
    }

    }

    return 0;
}