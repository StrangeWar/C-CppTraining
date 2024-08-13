#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char name[] = "sumit";

    for(int i=0;i<strlen(name);i++){
        for(int j=i;j<strlen(name);j++){
            for(int k=i;k<=j;k++){
                printf("%c",name[k]);
            }
            printf("\n");
        }
    }

    return 0;
}


//          i  |      j       |       k
// ------------|--------------|-------------
// 0           | 0            | 0             => s
// 0           | 1            | 0,1           => su
// 0           | 2            | 0,1,2         => sum
// 0           | 3            | 0,1,2,3       => sumi
// 0           | 4            | 0,1,2,4       => sumit



