#include <stdio.h>

int main() {

    int arr[2][3];

    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[0][2] = 30;
    arr[1][0] = 40;
    arr[1][1] = 50;
    arr[1][2] = 60;

    int i=0,j=0;

        while(i<2){
            j=0;
            while(j<3){
                printf("%d ",arr[i][j]);
                j++;
                }
            printf("\n");
            i++;
        }

    return 0;
}