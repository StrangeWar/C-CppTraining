// Q06. Write a C program to count total number of even and odd elements in an array.
#include <stdio.h>

int main() {

    int arr[10] = {23,34,7,234,4,567,234,67,98,56};
    int i, even = 0, odd = 0;

    for(i=0;i<10; i++){
        if(arr[i]%2 == 0)
            even++;
        else
            odd++;

    }

    printf("Total no. of odd elements: %d\n",odd);
    printf("Total no. of even elements: %d\n",even);
    return 0;
}