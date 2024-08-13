#include <stdio.h>
#include <string.h>


void strReverse(char str[],int len){
    if(len<0){
        return ;
    }

    
    printf("%c",str[len--]);
    return strReverse(str, len);
}


int main() {

    char str[100];
    int len;
    
    printf("Enter the value: ");
    gets(str);

    len = strlen(str);
 
    strReverse(str,len);
    

    return 0;
}