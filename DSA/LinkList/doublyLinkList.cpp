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

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;

}


void insertAtPos(DoublyList*& head, int val, int pos){
    DoublyList* newNode = new DoublyList(val);
    int i = 0;
    DoublyList* temp = head;
    while (i != pos-1  && temp != NULL) {
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteHead(DoublyList*& head){

    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    DoublyList* temp = head;

    head = head->next;
    if(head != NULL){
        head->prev = NULL;
    }

    delete temp;

    
}

void deleteTail(DoublyList*& head){
    DoublyList* temp = head;
    while(temp->next->next != NULL){

        temp = temp->next;
        
    }

    temp->next = NULL;
}


void deleteAtPos(DoublyList*& head, int pos){
    DoublyList* temp = head;
    DoublyList* previous = NULL;

    int i = 0;

    while(temp != NULL && i!=pos-1){
        previous = temp;
        temp = temp->next;
        i++;
    }

    previous->next = temp->next;
    temp->next->prev = previous;
    delete temp;
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

    createNode(head, 20);
    createNode(head, 30);
    print(head);

    insertAtbeg(head, 10);
    print(head);

    insertAtend(head, 50);
    insertAtend(head, 60);
    print(head);

    insertAtPos(head, 40, 3);
    print(head);

    deleteHead(head);
    print(head);

    deleteAtPos(head, 3);
    print(head);

    deleteTail(head);
    print(head);


    return 0;
}