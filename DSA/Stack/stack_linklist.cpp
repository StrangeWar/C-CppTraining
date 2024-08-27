#include <iostream>
using namespace std;

class Stack{
    public:
    int data;
    static int size;
    Stack *next;

    Stack(){};

    Stack(int val): data(val), next(NULL){
        size++;
    }
    ~Stack(){
        size--;
    }

};

int Stack::size = 0;

void push(Stack*& top, int val){
    Stack* new_node = new Stack(val);
    if(top == NULL){
        top = new_node;
    }
    else{
        Stack* temp = top;
        new_node->next = top;
        top = new_node;
    }
} 

void pop(Stack*& top){
    if(top == NULL){
        cout << "Stack is empty" << endl;
    }

    else{
        Stack* temp = top;
        top = temp->next;
        delete temp;   
    }
}

bool isEmpty(Stack* top){
    if(top == NULL){
        return true;
    }
    return false;
}


void display(Stack* top) {
    while(top != NULL) {
        cout << top->data << " ";
        top = top->next;
    }
    cout << endl;
}

int main() {

    

Stack* top = NULL;
Stack s;
    push(top, 1);
    push(top, 2);
    push(top, 3);
    push(top, 4);
    push(top, 5);
    push(top, 6);
    push(top, 7);
    push(top, 8);
    push(top, 9);
    push(top, 10);

    cout << "Size: " << Stack::size << endl; 
    display(top);

    pop(top);
    pop(top);
    pop(top);
    
    cout << "Size: " << Stack::size << endl; 
    display(top);

    cout<<"Is Empty: " << (isEmpty(top)?"ture":"false")<< endl;
    return 0;
}