#include <stdio.h>

int main() {

    int x = 56;
    int *ptr = &x;
    int &y = x;


    printf("%d\n", x); //56
    printf("%d\n", &x);  //address of x
    printf("%d\n", ptr);  // value at ptr, address of x
    printf("%p\n", ptr); // address of x in hexadecimal
    printf("%d\n", *ptr); //value of x,56
    printf("%d\n", *(&x));  //value of x,56
    printf("%d\n", *(&ptr)); //address of x
    printf("%d\n", &ptr);  // address of ptr
   // printf("%d\n", *x);  // it return error because 56 is invalid address

    return 0;
}