#include<stdio.h>

void main(){

    float km;

    printf("Input kilometers per hours: ");
    scanf("%f", &km);
    printf("Miles per hour: %.2f\n", km * 0.621371);
}