// Q10. Write a C program to check whether a number is Armstrong number or not

#include <stdio.h>
#include <math.h>

int main() {

    int num, d,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    d=num;
    
    while(d>0){
        int d1 = d%10;
        sum += pow(d1,3);
        d = d/10;
    }

    if(num == sum)
        printf("%d is a Armstrong number.",num);
    else
        printf("%d is not a Armstrong number.",num);


    return 0;

}