// Q5. Write a C program to print all ASCII character with their values.

#include <stdio.h>
#include<string.h>

int main() {

    char str[100];

    printf("Enter the characters: ");
    scanf("%s",str);

    for (int i = 0; i < strlen(str); i++)
    {
        printf("The ASCII value of %c is %d.\n",str[i],str[i]);
    }
    

    return 0;
}