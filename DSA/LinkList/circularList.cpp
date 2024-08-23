#include <iostream>
using namespace std;

class CircularList{

    public:
    int data;
    CircularList* next;
    CircularList* prev;
    CircularList(int val): data(val), next(NULL), prev(NULL){}

};


void createNode(CircularList*& head, int val){
    CircularList* newNode = new CircularList(val);

    if(head == NULL){
        newNode->prev = newNode;
        newNode->next = newNode;
        head = newNode;
    }

    CircularList* temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    head->prev = newNode;
    newNode->prev = temp;
    newNode->next = head;


}

void print(CircularList* head){
    CircularList* temp = head;

    do{
        cout << "|" <<temp->prev << "|" << temp->data << "|"<<temp->next << "|" <<"-->";
        temp = temp->next;
    }while(temp->next != head);
}


int main() {

    CircularList* head = NULL;
    createNode(head, 10);
    // createNode(head, 20);
    // createNode(head, 30);
    // createNode(head, 40);

    print(head);

    return 0;
}