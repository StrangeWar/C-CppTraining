#include <iostream>
using namespace std;

class DoublyList{
    public:
        int data;
        DoublyList* next;
        DoublyList* prev;

        DoublyList(int val):data(val), next(NULL), prev(NULL){};

};

void createNode(DoublyList*& head, int val){

    DoublyList* newNode = new DoublyList(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    DoublyList* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

}

void insertAtbeg(DoublyList*& head, int val){
    DoublyList* newNode = new DoublyList(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}


void insertAtend(DoublyList*& head, int val){
    DoublyList* newNode = new DoublyList(val);
    DoublyList* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;

}


void insertAtPos(DoublyList*& head, int val, int pos){
    DoublyList* newNode = new DoublyList(val);
    int i = 0;
    DoublyList* temp = head;
    while (i < pos - 1 && temp != NULL) {
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}


void print(DoublyList* head){

    DoublyList* temp = head;
    while(temp!= NULL){

        cout << "|"<<(int)temp->prev << "|" << temp->data << "|" << (int)temp->next << "|" << " --> ";
        temp = temp->next;
    
    }
    
    cout << "NULL"<<endl<<endl;

}




int main() {

    DoublyList* head = NULL;

    createNode(head, 10);
    createNode(head, 20);
    createNode(head, 30);
    print(head);

    insertAtbeg(head, 90);
    insertAtbeg(head, 100);
    print(head);

    insertAtend(head, 1000);
    print(head);

    insertAtPos(head, 128, 3);
    print(head);

    return 0;
}