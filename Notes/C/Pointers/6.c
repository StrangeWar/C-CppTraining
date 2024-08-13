#include <stdio.h>

int main() {

    int num =50;
    int* ptr = &num;
    int** pptr = &ptr;

    printf("value of num: %d\n",num);               //value of num
    printf("address of num: %d\n",&num);            //address of num
    printf("address of num: %d\n",ptr);             //address of num
    printf("address of ptr: %d\n",&ptr);            //address of ptr
    printf("address of num: %d\n",*(&ptr));         //address of num
    printf("address of ptr: %d\n",pptr);            //address of ptr
    printf("address of num: %d\n",*pptr);           //address of num
    printf("value of num: %d\n",**pptr);            //value of num
    printf("address of ptr: %d\n",*(&pptr));        //address of ptr
    printf("address of pptr: %d\n",&pptr);          //address of pptr






    return 0;
}