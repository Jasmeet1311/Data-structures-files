// circular linked list
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void LinkedListTraversal(struct node *head)
{
    struct node *ptr;
    ptr = head;
    do
    {
        cout << "Element is :" << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}
struct node * Head_insertion(struct node *head, int element)
{
    struct node *ptr;
    ptr = new (struct node);
    ptr->data = element;
    struct node *p;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = head;
    cout << "Before insertion" << endl;
    LinkedListTraversal(head);
    head = Head_insertion(head, 50);
    cout << "After insertion" << endl;
    LinkedListTraversal(head);

    return 0;
}