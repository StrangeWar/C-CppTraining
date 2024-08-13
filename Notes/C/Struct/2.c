#include <stdio.h>
#pragma pack()

void main()
{

    struct btech
    {
        char name[20];
        int roll;
        float cgpa;
    };

    struct btech s1 = {"vivek",9009,7.5};
    {
        printf("Name %s \n",s1.name);
        printf("Roll: %d \n",s1.roll);
        printf("CGPA: %f \n",s1.cgpa);
    };
    
}
