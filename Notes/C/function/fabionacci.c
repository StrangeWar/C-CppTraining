#include <stdio.h>

int fabionacci(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
       return fabionacci(n-1)+fabionacci(n-2);
    
}


int main() {

    int num;
    printf("Enter the number of terms: ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++) {
        printf("%d ", fabionacci(i));
    }
    printf("\n");

    return 0;
}