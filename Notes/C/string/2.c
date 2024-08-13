#include <stdio.h>

int main() {

    char name[] = "Vivek Sharma";
    
    int i=0;
    while(name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }

    printf("\n");

    //puts() function is use to get string output on consol window.
    
    puts(name);

    return 0;
}