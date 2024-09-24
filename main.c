#include <stdio.h>

int main() {

    int arr[10] = {1 ,2 ,3, 2, 1, 3, 4, 7, 7, 3};
    int hash[11] = {0};

    for(int i=0; i<=10; i++){
        hash[arr[i]] += 1;
    }

    for(int i=1; i<=10; i++){
        printf("%d = %d ", i, hash[i]);
    }

    return 0;
}