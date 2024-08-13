//create a linklist

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct linklist
    {
        int data;
        struct linklist *next;
    };

    struct linklist* e1 = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist* e2 = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist* e3 = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist* e4 = (struct linklist*)malloc(sizeof(struct linklist));


    e1->data = 10;
    e1->next = NULL;

    
    e2->data = 20;
    e2->next = NULL;
    e1->next = e2;

    e3->data = 30;
    e3->next = NULL;
    e2->next = e3;

    e4->data = 40;
    e4->next = NULL;
    e3->next = e4;

    printf("%s  %s\n", "Data","Address");
    printf("%d  %p\n", e1->data, e1->next);
    printf("%d  %p\n", e2->data, e2->next);
    printf("%d  %p\n", e3->data, e3->next);
    printf("%d  %s\n", e4->data, e4->next);




    return 0;
}