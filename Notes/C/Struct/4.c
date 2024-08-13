#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

    struct btech
    {
        char name[20];
        int roll;
        float cgpa;
    }s1;


    printf("Enter the name: ");
    scanf("%s",&s1.name);
    printf("\nEnter the roll: ");
    scanf("%d",&s1.roll);
    printf("\nEnter the cgpa: ");
    scanf("%f",&s1.cgpa);
    printf("\n\nName: %s\nRoll: %d\nCGPA: %f",s1.name,s1.roll,s1.cgpa);
    
}
