//Write a C program to check whether triangle is equilateral, scalene or isosceles Input: all side's length.

#include <stdio.h>
int main() {

    int side1, side2, side3;

    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d",&side1,&side2,&side3);

    if(side1==side2 && side2 == side3){
        printf("Equilateral Triangle.");
    }
    else if (side1==side2 || side1==side3 || side2==side3)
    {
        printf("Isosceles Triangle.");
    }
    else
        printf("Scelene Triangle.");
    

    return 0;
}