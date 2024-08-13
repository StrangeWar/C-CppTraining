#include <stdio.h>

int main() {

    int arr[5] = {10,20,30,40,50};
    
    printf("%d \n", arr[0]); //10
    printf("%d \n", arr);    // base address
    printf("%p \n", &arr[0]); //address in hexadecimal
    printf("%d \n", &arr);    // base address
    printf("%d \n", *arr);    //10
    printf("%d \n", *arr+2);  //12
    printf("%d \n", *(arr+2)); //30


    return 0;
}