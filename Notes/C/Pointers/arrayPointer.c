#include <stdio.h>

int main() {

    int a=10,b=20,c=30,d=40;
    int *arr[4]={&a,&b,&c,&d};

    int i=0;
    while (i!=4)
    {
        printf("%d ", *arr[i]);
        printf("%d ", arr[i]);
        printf("%d \n", &arr[i]);
        i++;
    }

    i = 0;
    printf("\n\n ");

       while (i!=4)
    {
        printf("%d ", **(arr + i));
        printf("%d \n ", *(arr + i));

        i++;
    }
    

    return 0;
}