//Write a C program to display a menu for arithmetic operations and perform the selected operation using switch case

#include <stdio.h>

int main() {

    float a,b;
    int choice;

    printf("choose options: \n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n => ");
    scanf("%d",&choice);

    printf("Enter the value of a and b: ");
    scanf("%f %f",&a,&b);

    switch (choice)
    {
    case 1:
        printf("Addition  is: %.2f", a+b);
        break;
    case 2:
        printf("Subtraction  is: %.2f", a-b);
        break;
    
    case 3:
        printf("Multiplication  is: %.2f", a*b);
        break;
    case 4:
        printf("Division is: %.2f",a/b);
        break;
    default:
        printf("Invalid Input.");
        break;
    }

    return 0;
}