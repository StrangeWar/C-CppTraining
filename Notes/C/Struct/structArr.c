#include <stdio.h>
#include <stdlib.h>

struct btech
{
    char name[20];
    int roll;
    int age;
};

void getdata(struct btech* s){

    fflush(stdin);
    printf("Enter the name of student: ");
    scanf("%[^\n]s",&s->name);
    printf("Enter the name of roll: ");
    scanf("%d",&s->roll);
    printf("Enter the name of age: ");
    scanf("%d",&s->age);

}

void putdata(struct btech* s){

    printf("Name of student is %s\n",s->name);
    printf("Roll of student is %d\n",s->roll);
    printf("Age of student is %d\n",s->age);
    printf("\n\n");
}


int main() {

    struct btech* s[3];
    int i;


    i=0;
    while(i<3){

        getdata(s[i]);
        i++;

    }

    i=0;
    while (i<3)
    {
        putdata(s[i]);
        i++;
    }
    


    return 0;
}