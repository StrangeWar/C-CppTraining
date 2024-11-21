#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;

    node(int val) : data(val), left(NULL), right(NULL) {};
};

      

void preorder(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
        }

        if (temp->right)
        {
            q.push(temp->right);

        }
    }
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
    preorder(root);

    cout << endl
         << endl;

    cout << "In-order: " << endl;
    inorder(root);

    cout << endl
         << endl;

    cout << "Post-order: " << endl;
    postorder(root);

    cout << endl
         << endl;

    cout << "Level-order: " << endl;
    levelorder(root);
    return 0;
}