//Write a program in C that takes minutes as input, and display the total number of hours and minutes.

#include <stdio.h>

int main() {

    int input_min, min,hours;

    printf("Input minutes: ");
    scanf("%d",&input_min);

    hours = input_min/60;
    min = input_min%60;
    printf("%d Hours, %d Minutes", hours,min);
    
    return 0;
}