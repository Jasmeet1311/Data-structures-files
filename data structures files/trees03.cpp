// postorder traversal
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
    struct node* p = new(struct node);
    p->left =NULL;
    p->right = NULL;
    p->data= value;
    return p;
}
void postorder(struct node* root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data <<" ";
    }    
}
int main()
{
    struct node* head = createNode(4);
    struct node* second = createNode(1);
    struct node* third = createNode(6);
    struct node* fourth = createNode(5);
    struct node* fifth = createNode(2);
     /*  4
       /  \
      1    6
     /  \
     5    2          */

     head->left = second;
     head ->right=third;
     second->left =fourth;
     second->right=fifth;
     postorder(head);
    return 0;
}