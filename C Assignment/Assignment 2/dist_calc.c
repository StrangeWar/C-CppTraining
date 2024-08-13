#include <stdio.h>
#include <math.h>

int main() {

    float x1,x2,y1,y2,dist;

    printf("Input x1: ");
    scanf("%f",&x1);
    printf("Input y1: ");
    scanf("%f",&y1);
    printf("Input x2: ");
    scanf("%f",&x2);
    printf("Input y2: ");
    scanf("%f",&y2);

    dist = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("The distance between the two points is %.4f",dist);

    return 0;
}