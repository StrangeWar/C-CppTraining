#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;

    node(int val) : data(val), left(NULL), right(NULL) {};
};

void print_preorder(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}

void print_inorder(node *root)
{
    if (root == NULL)
        return;

    print_inorder(root->left);
    cout << root->data << " ";
    print_inorder(root->right);
}

void print_postorder(node *root)
{
    if (root == NULL)
        return;

    print_postorder(root->left);
    print_postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);

    cout << "Pre-order: " << endl;
    print_preorder(root);

    cout << endl;

    cout << "In-order: " << endl;
    print_inorder(root);

    cout << endl;

    cout << "Post-order: " << endl;
    print_postorder(root);

    return 0;
}