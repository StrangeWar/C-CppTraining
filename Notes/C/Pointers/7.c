#include <stdio.h>

int main() {

    int i;
    float j;
    double k;
    char c;
    short sh;

    int* ptr1 = &i;
    float* ptr2 = &j;
    double* ptr3 = &k;
    char* ptr4 = &c;
    short* ptr5 = &sh;

    printf("%d \n",sizeof(ptr1));
    printf("%d \n",sizeof(ptr2));
    printf("%d \n",sizeof(ptr3));
    printf("%d \n",sizeof(ptr4));
    printf("%d \n",sizeof(ptr5));


    return 0;
}   