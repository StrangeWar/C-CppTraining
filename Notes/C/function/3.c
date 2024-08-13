#include <stdio.h>
#include <stdbool.h>

bool isOdd(int num){
    if (num%2==0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

int main() {

    if(isOdd(32)){
        printf("odd\n");
    }
    else
    {
        printf("even\n");
    }

    return 0;
}