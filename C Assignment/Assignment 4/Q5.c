//Write a C program to enter month number and print total number of days in month. (Excluding Leap Year)

#include <stdio.h>

int main() {

    int month;

    printf("Enter the month: ");
    scanf("%d",&month);

    if(month>=1 && month<=12){

        if(month == 2)
            printf("28 Days");
        else if (month == 4 || month == 6 || month == 9 || month==11)
            printf("30 Days");
        
        else
            printf("31 Days");
    } 

    else  
        printf("Invalid Input");


    return 0;
}