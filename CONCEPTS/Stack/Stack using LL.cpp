#include <iostream>
using namespace std;
struct Node 
{
    int data;
    struct Node *next;
}*Top =NULL;
struct Stack 
{
    int size;
    int Top;
    int *S;
};

void display(struct Stack st)
{
    struct Node *p;
    p=Top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p= p->next;
    }
}
void push(struct Stack *st,int x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    
    if (t==NULL)
    {
        cout<<"Stack Overflow";
    }
    else
    {
        t->data = x;
        t->next = Top;
        Top = t;
    }
}
int pop (struct Stack *st)
{
    int x = -1;
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if (Top == NULL)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        t=Top;
        Top=Top->next;
        x=t->data;
        free(t);
    }
    return x;
}
int main()
{
    struct Stack st;
    cout<<"Implementation of Stack using Linked List  ";

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    display(st);
    cout<<"After popping :";
    pop(&st);
    display(st);
    return 0;
}