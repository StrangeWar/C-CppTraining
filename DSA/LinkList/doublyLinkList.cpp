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

    return 0;
}