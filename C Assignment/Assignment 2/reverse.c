#include<stdio.h>

void main(){
    char a ,b, c;
    printf("Enter the character : ");
    scanf("%c %c %c",&a, &b, &c);

    printf("The reverse of %c%c%c is ",a,b,c);
    printf("%c%c%c",c,b,a);
}