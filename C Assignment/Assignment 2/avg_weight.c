#include <stdio.h>

int main() {

    float w_item1, w_item2, item1,item2;
    float total, avg;

    printf("Weight Item 1: ");
    scanf("%f", &w_item1);
    printf("Weight Item 2: ");
    scanf("%f", &w_item2);
    printf("Item 1: ");
    scanf("%f", &item1);
    printf("Item 2: ");
    scanf("%f", &item2);

    total = (w_item1 * item1) + (w_item2 * item2);
    avg = total/(item1+item2);
    printf("Average value: %.2f\n", avg);

    return 0;
}
