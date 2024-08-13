#include <stdio.h>
#include <string.h>

int main() {

    char name[20];
    name[0] = 'v';
    name[1] = 'i';
    name[2] = 'v';
    name[3] = 'e';
    name[4] = 'k';
    name[5] = ' ';
    name[6] = 'S';
    name[7] = 'h';
    name[8] = 'a';
    name[9] = 'r';
    name[10] = 'm';
    name[11] = 'a';
    name[12] = '\0';

    //printf("%d",strlen(name));

    int i = 0;
    while (name[i] != '\0')
    {
        printf("%c",name[i]);
        i++;
    }
    
    return 0;
}