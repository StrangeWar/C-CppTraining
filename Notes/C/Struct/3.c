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
    }s1;


    strcpy(s1.name,"vivek");
    s1.roll = 21;
    s1.cgpa = 9.5;

    {
        printf("Name %s \n",s1.name);
        printf("Roll: %d \n",s1.roll);
        printf("CGPA: %f \n",s1.cgpa);
    };
    
}
