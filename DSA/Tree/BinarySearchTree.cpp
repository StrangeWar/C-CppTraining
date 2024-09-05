#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int value){
    if(root == NULL){
        return new Node(value) ;
        }
    
    if(value < root->data){
        root->left = insert(root->left, value);
    }

    else{
        root->right = insert(root->right, value);
    }

}

void inorder(Node* root){

    if(root == NULL)
        return;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}


int search(Node* root, int val){
    if(root == NULL){
        return 0;
    }
    
    if(root->data == val){
        return 1;
    }
    if(val < root->data){
        return search(root->left, val);
    }
    
    if(val > root->data){
        return search(root->right, val);
    }

   return 0;

}

int main() {
    
    int arr[5] = {20, 12, 40, 45, 60};
    
    Node* root = NULL;
    root = insert(root, 30);

    
    int i = 0;

    while(i!=5){
        insert(root, arr[i++]);   
    }

    inorder(root);

    cout<<endl;

    cout<< "Element found: " << (search(root, 40)?"True":"False") << endl;
    cout<< "Element found: " << (search(root, 87)?"True":"False") << endl;

    
    return 0;
}

