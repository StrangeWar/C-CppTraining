#include <stdio.h>

void main(){

    int a,b,c,d,e;
    int total;
    float avg, perc;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    total = a+b+c+d+e;
    printf("Total= %d\n",total);
    avg = total/5;
    printf("Average= %.2f\n", avg);
    perc = (total*100)/500;
    printf("Percentage= %.2f", perc);
}