// breadth first search
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
        // cout << "Enqueued value is " << val << endl;
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
    // initializing queue array implementation 
    queue q;
    q.arr = new(int);
    q.rear = q.front =-1;
    q.size = 100;

    // BFS implementation
    int node;
    int i = 1;
    int visited[7] ={0,0,0,0,0,0,0}; 
    int a[7][7] ={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };
     cout<<i;
     visited[i] =1;
     enqueue(&q,i);  //     Enqueuing i for exploration
     while (!isEmpty(&q))
     {
         node = dequeue(&q);
         for (int j = 0; j < 7; j++)
         {
             if (a[node][j] == 1 && visited[j] == 0)
             {
                 cout<<j;
                 visited[j] =1;
                enqueue(&q,j);     
             }
             
         }
         
     }
     
    return 0;
} 