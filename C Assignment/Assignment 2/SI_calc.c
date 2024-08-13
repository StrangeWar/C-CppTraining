#include <stdio.h>

int main() {

    float si, principle, rate, time;

    printf("Enter principle: ");
    scanf("%f", &principle);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);
    si = (principle * rate * time) / 100;
    printf("Simple Interest: %.2f", si);

    return 0;
}