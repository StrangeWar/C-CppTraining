#include <stdio.h>
#include <math.h>

void main()
{

    float side, area;
    printf("Enter side of the Equilateral trinagle: ");
    scanf("%f", &side);
    area = (sqrt(3) * side * side) / 4;

    printf("Area of equilateral triangle = %.2f", area);
}
