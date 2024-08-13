// Q04. Write a C program to find maximum and minimum element in an array.

#include <stdio.h>

int main() {

    int arr[10] = {1,2,3,4,5,45,23,7,23,687};
    int i,min=arr[0],max=arr[0];
    
    for(i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
            }
        else if(arr[i]<min){
            min=arr[i];
        }
        
    }

    printf("The min element: %d\n",min);
    printf("The max element: %d",max);


    return 0;
}