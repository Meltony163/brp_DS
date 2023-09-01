#include<stdio.h>
typedef struct stack
{
    int top;
    StackEntry arr[MAX_SIZE];
}Stack;
void InitStack(Stack *ps)
{
    ps->top=0;
    return;
}
void push(int num,Stack *ps)
{
    ps->arr[ps->top]=num;
    ps->top++;
    return;
}
int StackFULL(Stack *ps)
{
    if(ps->top==MAX_SIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Pop(Stack *ps,int *num)
{
    *num=ps->arr[--ps->top];
}
int StackEmpty(Stack *ps)
{
    if(ps->top==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void StackTop(Stack *ps,int *num)
{
    *num=ps->arr[ps->top-1];
    return;
}
int StackSize(Stack *ps)
{
    return ps->top;
}
void ClearStack(Stack *ps)
{
    ps->top=0;
}
void TraversStack(Stack *ps,void (*pf)(StackEntry))
{
    for(int i=ps->top-1;i>=0;i--)
    {
        *pf(ps->arr[i]);
    }
}
