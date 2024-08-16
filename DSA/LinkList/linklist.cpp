#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

void insertAtBeginning(Node* &head, int value){
    Node* newNode = new Node(value);
    newNode -> next = head;
    head = newNode;
}

void insertAtEnd(Node* &head, int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
}

void display(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl << endl;
}

void deleteNode(Node* head, int key){
    Node* temp = head;
    Node* prev = nullptr;

    if(temp != temp && temp->data == key){
        head = temp->next;
        delete temp;
        return;
    }

    while(temp != nullptr && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == nullptr){
        cout << "Node not found" << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}

int main() {

    Node *head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    insertAtBeginning(head, 0);


    cout<<"Link List: "<<endl;
    display(head);

    cout<<"Link List after deletation:"<<endl;
    deleteNode(head, 30);
    display(head);
    
    deleteNode(head, 60);


    return 0;
}