// linked list deletion

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
// deleting the head node
struct node *headDeletion(struct node *head)
{
    struct node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// deleting node at the given index
struct node *deletionAtIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
// deletion of last node
struct node *deletionAtLast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
// delete by value
struct node *deleteByValue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
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
    fourth->next = NULL;
    traversal(head);
    cout << endl;
    // head = headDeletion(head);
    // head = deletionAtIndex(head,2);
    // head = deletionAtLast(head);
    head = deleteByValue(head, 40);
    traversal(head);
    return 0;
}