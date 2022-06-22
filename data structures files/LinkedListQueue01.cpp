// implementing queue with Linked list

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *f = NULL;
struct node *r = NULL;

void LinkedListTraversal(struct node *ptr)
{
    if (ptr == NULL)
    {
        cout << "Queue Empty" << endl;
    }
    else
    {
        while (ptr != NULL)
        {
            cout << "Element: " << ptr->data << endl;
            ptr = ptr->next;
        }
    }
}
void Enqueue(int val)
{
    struct node *n = new (struct node);
    if (n == NULL)
    {
       cout<<" Queue full"<<endl;
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int dequeue()
{
    int val = -1;
    struct node *ptr = f;
    if (f == NULL)
    {
        cout << "Queue Empty" << endl;
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    Enqueue(22);
    Enqueue(28);
    Enqueue(26);
    LinkedListTraversal(f);
    cout<<"dequeing "<<dequeue()<<" from queue"<<endl;
    return 0;
}