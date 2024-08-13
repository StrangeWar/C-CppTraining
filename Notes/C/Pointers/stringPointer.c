#include <stdio.h>

int main() {

    char str1[] = "Hello world";
    char *str2 = "Hello world";
    char *str[] = {"we","are","coders"};

    printf("%s \n",str1);
    printf("%s \n\n",str2);

    printf("%s \n",str[0]);
    printf("%s \n",str[1]);
    printf("%s \n\n",str[2]);

    printf("%d \n",&str[0]);
    printf("%d \n",&str[1]);
    printf("%d \n\n",&str[2]);

    printf("%s \n",*(str));
    printf("%s \n",*(str + 1));
    printf("%s \n",*(str + 2));
    printf("%s \n\n",*(str + 2)+2);


    return 0;
}