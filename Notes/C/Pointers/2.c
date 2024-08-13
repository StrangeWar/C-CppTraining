#include <stdio.h>

int main() {

    int x = 34;

    char *ptr = &x;
    printf("Address of x = %d\n", ptr);
    ptr++;
    printf("Address of x = %d\n", ptr);

    return 0;
}