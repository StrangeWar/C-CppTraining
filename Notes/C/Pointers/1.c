#include <stdio.h>

int main() {
    
    int x = 10;
    int *ptr = &x;

    printf("x = %d\n", ptr);

    ptr++;
    printf("x = %d\n", ptr);

    return 0;
}