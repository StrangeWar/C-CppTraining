//create a linklist

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct linklist
{
    int data;
    struct linklist *next;
};


void print(struct linklist *head){

    struct linklist *temp = head;

    while(temp != NULL){  // traversing linklist until last node is not hitted.
    printf("%d " ,temp->data);
    temp = temp->next;  // jumping by one node after each iteration.

    }
}

int main(){

    struct linklist* e1 = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist* e2 = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist* e3 = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist* e4 = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist* e5 = (struct linklist*)malloc(sizeof(struct linklist));



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

    e5->data = 50;
    e5->next = NULL;
    e4->next = e5;
    
    print(e1);



    return 0;
}