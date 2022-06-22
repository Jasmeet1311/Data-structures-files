// stacks using linked list
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
void LinkedListTraversal(struct node *ptr)
{   
    
    while (ptr!= NULL)
    {
       cout<<"Element :"<<ptr->data<<endl;
       ptr= ptr->next;
    }
}

int isEmpty(struct node* top)
{
    if (top ==NULL)
    {
        cout<<"stack empty"<<endl;
        return 1;
    }
    return 0;
}
int isFull(struct node* top)
{   
    struct node*p;
    p = new(struct node);
    if (p ==NULL)
    {
        cout<<"cannot push"<<endl;
        return 1;
    }
    return 0;
}
struct node* push(struct node *top,int element)
{
    if (isFull(top))
    {
        cout<<element<<" failed to push"<<endl;
    }
    else
    {
        struct node *n= new(struct node);
        n->data = element;
        n->next =top;
        top= n;
    }
    return top;
}
int pop(struct node** top)
{
    int x;
    if (isEmpty(*top))
    {
        cout<<"Stack underflow"<<endl;
        return 1;
    }
    else
    {
        struct node *n= *top;
        *top = (*top)->next;
        x = n->data;
        free(n);
    } 
   return x; 
}
int peek(struct node *top,int position)
{
    struct node *ptr = top;
    for (int i = 0;( i< position-1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    return -1;
}
int stacktop(struct node *top)
{
    return top->data;
}
int stackBottom(struct node* top)
{
    struct node *ptr= top;
    while (ptr->next != NULL)
    {
        ptr= ptr->next;
    }
    cout<<"stack bottom: "<<ptr->data<<endl;
    return 0;
}
int main() 
{
    struct node *top = NULL;
    top = push(top,45);
    top = push(top,4);
    top = push(top,490);
    // top = push(top,40);
    // top = push(top,47);
    LinkedListTraversal(top);
    cout<<"Element "<<pop(&top)<<" popped out"<<endl;
    cout<<"After pop function"<<endl<<endl;
    LinkedListTraversal(top);
    // cout<<"Stack top :"<<stacktop(top)<<endl;
    // stackBottom(top);
    // cout<<"element at position 2 is "<<peek(top,2);
    return 0;
}