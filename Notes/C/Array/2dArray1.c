#include <stdio.h>

int main() {

    int a[2][3]={{10,20,30},
                 {40,50,60}};

    int i=0,j=0;

    while(i<2){
            j=0;
            while(j<3){
                printf("%d ",a[i][j]);
                j++;
                }
            printf("\n");
            i++;
        }
    

    return 0;
}   