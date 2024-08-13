//Write a C program to find roots of a quadratic equation using switch case.

#include <stdio.h>
#include<math.h>

int main() {

    float a, b, c, d, x1, x2;
    printf("Enter the value of a, b and c: \n");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;
    switch (d==0)
    {
    case 1:
        x1 = -b / (2*a);
        printf("The root of the equation is %.2f\n", x1);
        break;
    case 0:
        switch (d>0)
        {
        case 1:
            x1 = (-b + sqrt(d)) / (2*a);
            x2 = (-b - sqrt(d)) / (2*a);
            printf("The roots of the equation are %.2f and %.2f\n", x1, x2);
            break;
        case 0:
            printf("The roots of the equation are imaginary\n");
             break;
        }
        break;
    
    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}