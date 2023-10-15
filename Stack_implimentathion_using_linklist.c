
#include <stdio.h>
#include <stdlib.h>

struct stack
{

    int top;
    int size;
    int *arr;
};


int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    struct stack *s = (struct stack *)malloc(s->size * sizeof(struct stack));
    s->top = -1;
    s->size = 10;
    s->arr = (int *)malloc(s->size * sizeof(int));
    if (isempty(s))
    {
        printf("The stack is Empty\n");
    }
    else
    {
        printf("The stack is not Empty\n");
    }

    if (isfull(s))
    {
        printf("The stack is Full\n");
    }
    else
    {
        printf("The stack is not Full\n");
    }

    return 0;
}
