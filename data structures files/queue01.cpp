#include <iostream>
using namespace std;
struct queue
{
    int size;
    int rear;
    int front;
    int *arr;
};
int isEmpty(struct queue *q)
{
    if (q->rear == q->front)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = val;
        cout << "Enqueued value is " << val << endl;
    }
}
int dequeue(struct queue *q)
{
    int a;
    if (isEmpty(q))
    {
        cout << "Queue is Empty" << endl;
        return 1;
    }
    else
    {
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 50;
    q.rear = q.front = -1;
    q.arr = new (int);

    enqueue(&q, 12);
    enqueue(&q, 32);
    enqueue(&q, 92);
    enqueue(&q, 82);
    enqueue(&q, 90);
    cout << "Dequeuing the value  " << dequeue(&q) << endl;
    cout << "Dequeuing the value  " << dequeue(&q) << endl;
    delete q.arr;

    return 0;
}