#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data<<endl;
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    head = new (struct Node);
    second = new (struct Node);
    third = new (struct Node);
    forth = new (struct Node);
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 87;
    third->next = forth;
    forth->data = 47;
    forth->next = NULL;
    LinkedListTraversal(head);
    return 0;
}