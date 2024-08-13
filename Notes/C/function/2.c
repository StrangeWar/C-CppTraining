#include <stdio.h>

void func(int *a){
    (*a)++;
}

int main() {

    int a = 12;
    printf("%d \n",a);
    func(&a);
    printf("%d \n",a);

    return 0;
}