//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

#include <stdio.h>

int main() {

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i = 1;
    while (n >= i) {
        printf("%d\n", n--);
        }


    return 0;
}