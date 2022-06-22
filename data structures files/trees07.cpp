#include<iostream>
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
void insert(int key,struct node* root)
{
    struct node * ptr = NULL;
    while (root!= NULL)
    {
        ptr= root;
        if (key == root->data)
        {
            cout<<"cannot insert the element"<<key<<endl;
            return;
        }
        else if (key<root->data)
        {
            root= root->left;
        }
        else
        {
            root=root->right;
        }  
    }   
    struct node* n = createnode(key);
    if (key<ptr->data)
    {
        ptr->left = n;
    }
    else
    {
        ptr->right = n;
    }
    
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

    insert(7,root);
    cout<<root->right->right->data;

    return 0;
}