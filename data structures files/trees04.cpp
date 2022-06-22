// Inorder traverasal

#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int value)
{
    struct node*p = new(struct node);
    p->data  = value;
    p->right = NULL;
    p->left = NULL;
    return p;
}
void inOrder(struct node*root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
    
}
int main()
{   
    struct node *root= createnode(4);
    struct node *second= createnode(1);
    struct node *third= createnode(6);
    struct node *fourth= createnode(5);
    struct node *fifth= createnode(2);

    root->left  = second;
    root ->right = third;
    second ->left = fourth;
    second ->right = fifth;
    inOrder(root);
    return 0;
}