// insertion

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
// traversal  function
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
//  case 1 : insert element at the beginning
struct node *insertAtFirst(struct node *head, int element)
{
    struct node *p;
    p = new (struct node);
    p->data = element;
    p->next = head;
    return p;
}
// case 2 : insert the element and the index
struct node *insertAtIndex(struct node *head, int element, int index)
{
    struct node *ptr;
    ptr = new (struct node);
    struct node *p;
    p = new (struct node);
    p = head;
    int i = 1;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = element;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// case 3--> insert at end
struct node *insertAtEnd(struct node *head, int element)
{
    struct node *ptr;
    struct node *p;
    ptr = new (struct node);
    p = new (struct node);
    ptr->data = element;
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insertAfterNode(struct node *head, struct node *prevNode, int element)
{
    struct node *ptr;
    ptr = new (struct node);
    ptr->data = element;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = new (struct node);
    second = new (struct node);
    third = new (struct node);
    fourth = new (struct node);

    // creation of first node
    head->data = 34;
    head->next = second;
    // creation of second node
    second->data = 89;
    second->next = third;
    // creation of third node
    third->data = 56;
    third->next = fourth;
    // creation of fourth node
    fourth->data = 3;
    fourth->next = NULL;
    cout << "\nBefore insertion at beginning" << endl;
    traversal(head);
    // head=insertAtFirst(head,90);
    // cout<<"\nAfter insertion at beginning"<<endl;
    // traversal(head);
    head=insertAtIndex(head,98,2);
    cout<<"\nAfter insertion at 3 index"<<endl;
    traversal(head);
    // cout<<"Insert at end"<<endl;
    // head = insertAtEnd(head,456);
    // traversal(head);
    // cout << "\nInsert after node second" << endl;
    // head = insertAfterNode(head, second, 489);
    // traversal(head);
    return 0;
}