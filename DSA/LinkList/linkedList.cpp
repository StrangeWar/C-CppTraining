#include <iostream>
using namespace std;


class List{

    public:
    int data;
    List* link;

    List(int val):data(val), link(NULL){};

};


void createNode(List* &node, int val){

    List* newNode = new List(val);
    if(node == NULL){
        node = newNode;
        return;
    }
    List* temp = node;
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = newNode;

}


void insertAtBeg(List* &node, int val){

    List* newNode = new List(val);
    newNode->link = node;
    node = newNode;

}

void insertAtPos(List*& node, int val, int pos){
    List* newNode = new List(val);
    int i = 0;
    List* temp = node;
    while(i != pos-1){
        temp = temp->link;
        }
        newNode->link = temp->link;
        
    }
}

void deleteNode(List* node, int key){

    List* temp = node;
    List* prev = NULL;

    while(temp != NULL && temp->data != key){

        prev = temp;
        temp = temp->link;
    }

    prev->link = temp->link;
    delete temp;
    cout<<"List after deletion: "<<endl;
}


void deleteTail(List* node){

    List* temp = node;
    
    while(temp->link->link != NULL){
        temp = temp->link;
    }

    temp->link = NULL;

}


void print(List* head){

    List* temp = head;
    while(temp!= NULL){

        cout << "|" << temp->data << "|" << (int)temp->link << "|" << " --> ";
        temp = temp->link;
    
    }
    
    cout << "NULL"<<endl<<endl;

}


int main() {

    List* head = NULL;
    createNode(head, 10);
    createNode(head, 20);
    createNode(head, 30);
    createNode(head, 40);
    insertAtBeg(head, 0);
    print(head);

    deleteNode(head, 20);
    print(head);

    deleteTail(head);
    print(head);

    return 0;

}