#include <stdio.h>
#include <string.h>

int main() {

    char name1[] = "Vivek Sharma";
    char name2[10];

    // name2 = "Vivek Sharma"; error

    strcpy(name2,"vivek");
    printf("%s\n",name2);
       

    return 0;
}