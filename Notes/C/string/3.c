#include <stdio.h>
#include <string.h>

int main() {

    char fname[20] = "Vivek";
    char lname[20] = "Sharma";
    char fullname[40];

    strcat(fname, lname);
    strcpy(fullname, fname);
    printf("%s", fullname);
    
    return 0;
}