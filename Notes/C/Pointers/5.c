#include <stdio.h>

int main() {

    int arr[] = {10,20,30};
    int* p1 = &arr[0];
    int* p2 = &arr[1];
    int* p3 = &arr[2];

    printf("%d\n",p3-p1);
    printf("%d\n",p2-p1);

    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", p3);
    return 0;
}