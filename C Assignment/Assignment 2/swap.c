#include <stdio.h>

int main() {

    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    b = a+b;
    a = b-a;
    b = b-a;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}