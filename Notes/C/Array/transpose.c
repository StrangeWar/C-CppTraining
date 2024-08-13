#include <stdio.h>
#define row 2
#define col 3

int main() {

    int arr[row][col]={{10,20,30},
                 {40,50,60}};

    int i=0,j=0;

    while(i<row){
            j=0;
            while(j<col){
                printf("%d ",arr[i][j]);
                j++;
                }
            printf("\n");
            i++;
        }

    printf("\n \n");

    int tras[col][row];

    i=0,j=0;

    while(i<row){
            j=0;
            while(j<col){
                tras[j][i] = arr[i][j];
                j++;
                }
            i++;
        }

    
    i=0,j=0;

    while(i<col){
            j=0;
            while(j<row){
                printf("%d ",tras[i][j]);
                j++;
                }
            printf("\n");
            i++;
        }
    

    return 0;
}   