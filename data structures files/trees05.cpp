// binary search trees
// inorder traversal of binary search trees gives sorted arrays
#include<iostream>
using namespace std;
struct node
{  
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int element)
{
    struct node*p = new(struct node);
    p->left=NULL;
    p->right=NULL;
    p->data = element;
    return p;
}
void inorder(struct node* root)
{
    if (root!= NULL)
    {
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }      
}
// not done 
int isBST(struct  node* root)
{
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}
int main()
{
    struct node *root = createnode(5);
    struct node *first = createnode(3);
    struct node *second = createnode(6);
    struct node *third = createnode(1);
    struct node *fourth = createnode(4);
    
   root->left=first;
   root->right =second;

   first->left =third;
   first->right=fourth;

   inorder(root);

    return 0;
}