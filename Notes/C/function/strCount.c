#include <stdio.h>
#include <string.h>


int strCount(char str[], int len){
   
    if(len == 0)
        return 0;

    return 1 + strCount(str , len-1);
}




int main() {

    char str[100];
    int i,count;

    printf("Enter the string: ");
    gets(str);
    count = strCount(str,strlen(str));
    printf("The number of characters in the string is: %d",count);
    return 0;
}