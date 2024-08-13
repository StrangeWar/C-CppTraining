#include <stdio.h>
#include <string.h>
int main() {

    char name[20];
    char fname[10];
    char lname[10];

    printf("Enter the name: ");
    // gets(name);
    scanf("%[^\n]s", name);
    printf("Hello %s", name);

    printf("\n\n------------------------------------------------------------------------------------\n\n");

    // printf("Enter the name: ");
    // scanf("%s %s",fname, lname);
    // printf("Hello, %s %s", fname, lname);


    return 0;
}