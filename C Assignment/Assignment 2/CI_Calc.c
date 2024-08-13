#include <stdio.h>
#include <math.h>

void main(){

    float amount, rate, ci;
    int time;

    printf("Enter principle amount: ");
    scanf("%f", &amount);
    printf("Enter time: ");
    scanf("%d",&time);
    printf("Enter rate: ");
    scanf("%f", &rate);
    ci = amount * pow((1 + (rate / 100)), time);
    printf("Compound Interest: %f", ci);

}