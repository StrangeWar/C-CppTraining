#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack()

void main()
{

    struct btech
    {
        char name[20];
        int roll;
        float cgpa;
    };

    struct btech *s1 = (struct btech*)malloc(sizeof(sizeof(struct btech)));


    printf("Enter the name: ");
    scanf("%s",&s1->name);
    printf("\nEnter the roll: ");
    scanf("%d",&s1->roll);
    printf("\nEnter the cgpa: ");
    scanf("%f",&s1->cgpa);
    printf("\n\nName: %s\nRoll: %d\nCGPA: %.2f",s1->name,s1->roll,s1->cgpa);
    
}
