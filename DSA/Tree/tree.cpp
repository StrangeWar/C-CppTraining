#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left, *right;

    node(int val):data(val), left(NULL), right(NULL){};

};



int main() {

    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);

    return 0;
}