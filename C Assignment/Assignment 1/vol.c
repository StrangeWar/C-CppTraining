#include<stdio.h>
#define PI 3.14
void main()
{
float vol, r;
printf("Enter the radius of the sphere: ");
scanf("%f",&r);
vol=(4*PI*r*r*r)/3;
printf("the volume of the sphere: %.2f",vol);
}