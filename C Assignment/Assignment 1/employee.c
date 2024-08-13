#include<stdio.h>

void main(){

    int emp_id;
    float working_hr,salary;

    printf("Input the employees ID: ");
    scanf("%d", &emp_id);

    printf("Input the working hrs: ");
    scanf("%f", &working_hr);
    
    printf("Salary amount/hr: ");
    scanf("%f", &salary);

    printf("Employee ID: %d\n", emp_id);
    printf("Salary: %.2f\n", working_hr*salary);
}