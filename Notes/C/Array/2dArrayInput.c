#include <stdio.h>

int main() {

    int arr[2][3];
    int i=0,j=0;

    while(i<2){
        j=0;
        while (j<3)
        {
            printf("Enter the value of index %d,%d :",i,j);
            scanf("%d",&arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
        
    }  

    i=0,j=0;

    while(i<2){
    j=0;
    while (j<3)
    {
        printf("%d ",arr[i][j]);
        j++;
    }
    printf("\n");
    i++;
    
}  

    return 0;
}