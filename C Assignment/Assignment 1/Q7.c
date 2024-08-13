//Write a C program to find the third angle of a triangle if two angles are given.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the two angles of the triangle: \n");
    scanf("%d %d", &a, &b);
    c = 180 - (a + b);
    printf("The third angle of the triangle is: %d", c);
;lniuyguyguyhb
    return 0;
}