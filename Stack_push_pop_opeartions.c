#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int isfull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *s, int data)
{
    if (isfull(s))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}

int pop(struct stack *s)
{
    if (isempty(s))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int val = s->arr[s->top];
        s->top--;
        return val;
    }
}


void traversal(struct stack *s){
    int size=s->top;
    
    while (size>=0)
    {
        printf("element : %d\n",s->arr[size]);
        size--;
    }
    
}

int main()
{

    struct stack *s = (struct stack *)malloc(s->size * sizeof(struct stack));
    s->top = -1;
    s->size = 20;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 34);
    push(s, 3);
    push(s, 2);
    traversal(s);
    int result = pop(s);

    printf("%d element popped from stack\n", result);
    result = pop(s);
    printf("%d element popped from stack\n", result);

    return 0;
}

