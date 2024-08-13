#include <stdio.h>

int func(int n){
    if(n==1){
        return 1;
    }
    return n*func(n-1);
}

int main() {

    int fact = func(5);
    printf("factorial: %d",fact);

    return 0;
}


//reverse a string
//count all char of string
//print sum of all array elements
//print fibonacci series.
//count no. of digit in a number.