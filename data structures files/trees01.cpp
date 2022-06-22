// CREATION AND LINKING OF NODES IN A TREE
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
    struct node * p = new(struct node);
    p->data = value;
    p->left =NULL;
    p->right =NULL;
    return p;
}
int main()
{  
    struct node* A = createNode(7);
    struct node* B = createNode(4);
    struct node* C = createNode(6);
    struct node* D = createNode(1);
    struct node* E = createNode(2);
    struct node* F = createNode(0);
    struct node* G = createNode(3);

    A->left = B;
    A->right= C;

    B->left= D;
    B->right= E;

    C->left= F;
    C->right= G;


    return 0;
}