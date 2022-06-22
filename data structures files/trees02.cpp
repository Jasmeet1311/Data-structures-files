//preorder traversal 
// root -> left subtree -> right subtree
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int value)
{
    struct node * n = new( struct node);
    n->data = value;
    n->right = NULL;
    n->left  = NULL;
    return n;
}
void preorder(struct node* root)
{
    if (root != NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    
}
int main()
{
    struct node* A;
    struct node* B;
    struct node* C;
    struct node* D;
    struct node* E;

    A = createNode(4);
    B = createNode(1);
    C = createNode(5);
    D = createNode(2);
    E = createNode(6);

    A->left = B;
    A->right =E;

    B->left = C;
    B->right = D;

    preorder(A);
    return 0;
}