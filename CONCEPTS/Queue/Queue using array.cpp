#include <iostream>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q)
{
    cout<<"\nEnter Size of a Queue :";
    cin>>q->size;
    q->front=q->rear=-1;
    q->Q =(int *)malloc(q->size*sizeof(int));
}
void display(struct Queue q)
{
    int i;
    if(q.front == q.rear)
    {
        cout<<"Queue is Empty";
    }
    else
    {
        for(int i=q.front+1;i<=q.rear;i++)
        {
            cout<<q.Q[i]<<" ";
        }
    }
}
void enqueue(struct Queue *q,int x)
{
    if (q->rear == q->size-1)
    {
        cout<<"Stack Overflow";
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct Queue *q)
{
    int x = -1;
    if (q->rear == q->front)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        q->front++;
        x = q->Q[q->rear];
    }
    return x;
}
int main()
{
    struct Queue q;
    cout<<"Implementation of Stack using Array  ";
    create(&q);
    cout<<"Enter Queue elements : ";
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    display(q);
    cout<<"After popping :";
    dequeue(&q);
    display(q);
    return 0;
}
