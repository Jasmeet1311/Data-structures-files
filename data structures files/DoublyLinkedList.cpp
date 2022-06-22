// Doubly linked list 

#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
void Forward_traversal(struct node * head )
{
   struct node *ptr;
   ptr= head;
   while (ptr != NULL)
   {
       cout<<"Element: "<<ptr->data<<endl;
       ptr = ptr->next;
   }
}
void Backward_Traversal(struct node*fourth)
{
    struct node* p;
    p = fourth;
    while (p != NULL)
    {
        cout<<"Element: "<<p->data<<endl;
        p = p->prev;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    // creation of nodes

    head= new(struct node);
    second= new(struct node);
    third= new(struct node);
    fourth= new(struct node);
    // linking

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second ->data = 20;
    second ->next = third;
    second ->prev = head;

    third ->data = 30;
    third ->next = fourth;
    third ->prev = second;

    fourth ->data = 40;
    fourth->prev = third;
    fourth ->next =NULL;
    cout<<"Forward traversal"<<endl;
    Forward_traversal(head);
    cout<<"Backward traversal"<<endl;
    Backward_Traversal(fourth);
    return 0;
}