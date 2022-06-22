// searching an element in a tree using recursive approach and using 
// iterative approach

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int element)
{
    struct node *p = new (struct node);
    p->data = element;
    p->left = NULL;
    p->right = NULL;
    return p;
}
struct node* search(struct node* root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data )
    {
        return root;
    }
    else if (key<root->data)
    {
        return search(root->left,key);
    }
    else  
    {
        return search(root->right,key);
    }  
}
struct node* iter_search(int key,struct node* root)
{
   while (root != NULL)
   {
       if (key == root->data)
       {
           return root;
       }
       else if (key<root->data)
       {
           root= root->left;
       }
       else
       {
           root= root->right;
       }    
   }
   return NULL;
}
int main()
{
    struct node *root = createnode(5);
    struct node *first = createnode(3);
    struct node *second = createnode(6);
    struct node *third = createnode(1);
    struct node *fourth = createnode(4);

    root->left = first;
    root->right = second;

    first->left = third;
    first->right = fourth;

    // struct node* n =search(root,4);
    struct node* n =iter_search(4,root);
    if (n!=NULL)
    {
        cout<<" Element found:"<< n->data<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}