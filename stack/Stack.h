#ifndef STACK_H
#define STACK_H
#define MAX_SIZE 10
#define StackEntry int
#include<stdio.h>
typedef struct stack
{
    int top;
    StackEntry arr[MAX_SIZE];
}Stack;
void InitStack(Stack *ps);
void push(int num,Stack *ps);
int StackFULL(Stack *ps);
void Pop(Stack *ps,int *num);
int StackEmpty(Stack *ps);
void StackTop(Stack *ps,int *num);
int StackSize(Stack *ps);
void ClearStack(Stack *ps);
void TraversStack(Stack *ps,void (*pf)(StackEntry));

#endif