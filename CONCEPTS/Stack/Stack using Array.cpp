
#include <iostream>
using namespace std;
struct Stack 
{
    int size;
    int Top;
    int *S;
};
void create(struct Stack *st)
{
    cout<<"\nEnter Size of a Stack :";
    cin>>st->size;
    st->Top=-1;
    st->S = (int *)malloc(st->size*sizeof(int));
}
void display(struct Stack st)
{
    if(st.Top == -1)
    {
        cout<<"Stack is Empty";
    }
    else
    {
        for(int i=st.Top;i>=0;i--)
        {
            cout<<st.S[i]<<" ";
        }
    }
}
void push(struct Stack *st,int x)
{
    if (st->Top == st->size-1)
    {
        cout<<"Stack Overflow";
    }
    else
    {
        st->Top++;
        st->S[st->Top] = x;
    }
}
int pop (struct Stack *st)
{
    int x = -1;
    if (st->Top == -1)
    {
        cout<<"Stack Underflow";
    }
    else
    {
        x = st->S[st->Top];
        st->Top--;
    }
    return x;
}
int main()
{
    struct Stack st;
    cout<<"Implementation of Stack using Array  ";
    create(&st);
    cout<<"Enter stack elements : ";
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
