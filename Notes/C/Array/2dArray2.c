#include <stdio.h>

int main() {

    int arr[2][3]={{10,20,30},
                 {40,50,60}};

    printf("%d \n", arr[0][0]);  //value at index '0'
    printf("%d \n", &arr[0][0]); //base address
    printf("%d \n", &arr[0]); //base address
    printf("%d \n", *arr[0]); // value at base address
    printf("%d \n", arr); // base address
    printf("%d \n", *arr); // base address
    printf("%d \n", **arr); // value at base address.
    printf("%d \n", &arr[1]);
    printf("%d \n", &arr[1][1]);
    printf("%d \n", &arr[1][0]);


    return 0;
}