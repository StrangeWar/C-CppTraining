//7.Write a C program to find all roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, d, x1, x2;
    printf("Enter the value of a, b and c: \n");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("The roots of the equation are %.2f and %.2f\n", x1, x2);
        }
    else if (d == 0) {
        x1 = -b / (2*a);
        printf("The root of the equation is %.2f\n", x1);
        }
    else {
        printf("The equation has no real roots\n");
        }


    return 0;
}