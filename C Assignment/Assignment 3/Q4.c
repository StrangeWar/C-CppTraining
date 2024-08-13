//Write a C program to check whether year is leap year or not using conditional operator.

#include <stdio.h>

int main() {

    int year;

    printf("Enter the year: ");
    scanf("%d", &year);
    printf("The year %d is %s. ", year, (year%4==0 && year%100!=0)? "leap year" : (year%400==0)? "leap year" : "not leap year");



    return 0;
}