// Q10. Write a C program to find LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, lcm;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    
    int maxm = (a>b)? a:b;
    int i = maxm;
    while(1) {
        if(i%a==0 && i%b==0) {
            lcm = i;
            break;
        }
        i++;
    }
    printf("The LCM of %d and %d is %d",a,b,lcm);

    return 0;
}