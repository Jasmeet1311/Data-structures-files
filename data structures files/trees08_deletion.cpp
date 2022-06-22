//deletion in a binary search tree

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
    p->data = value;
    p->left =NULL;
    p->right =NULL;
    return p;
}
void inOrder(struct node* root)
{
    if (root!= NULL)
    {
        inOrder(root->left);
        cout<<root->data;
        inOrder(root->right);
    }      
}
struct node*inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right !=NULL )
    {
         root = root->right;
    }
    return root;
    
}
struct node *deleteNode(struct node *root, int value)
{

    struct node* iPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL)
    {
        free(root);
        return NULL;
    }
    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}
 
int main()         
{
     
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  
 
    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    cout<<endl;
    deleteNode(p, 5);
    inOrder(p);

    return 0;
}