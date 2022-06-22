#include <iostream>
using namespace std;
struct circularQueue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int isEmpty(struct circularQueue *q)
{
    if (q->front == q->rear)
    {
        return 1;
    }
    return 0;
}
int isFull(struct circularQueue *q)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = val;
        cout << "Enqueued value is " << val<<endl;
    }
}
int dequeue(struct circularQueue *q)
{
    int a;
    if (isEmpty(q))
    {
        cout << "Queue is Empty" << endl;
        return 1;
    }
    else
    {
        q->front = ((q->front + 1) % q->size);
        a = q->arr[q->front];
    }
    return a;
}

int main()
{
    struct circularQueue c1;
    c1.size = 15;
    c1.front = c1.rear = 0;
    c1.arr = new int[c1.size];

     enqueue(&c1,12);
     enqueue(&c1,92);
     enqueue(&c1,72);
     cout<<"Dequeued value is "<<dequeue(&c1)<<endl;
     cout<<"Dequeued value is "<<dequeue(&c1)<<endl;
    delete[] c1.arr;

    return 0;
}