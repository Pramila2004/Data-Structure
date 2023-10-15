#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void push(struct stack *s, char data)
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

char pop(struct stack *s)
{
    if (isempty(s))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}

int isoperator(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int presidence(char a)
{
    if (a == '+' || a == '-')
    {
        return 2;
    }
    if (a == '*' || a == '/')
    {
        return 1;
    }
}

int stacktop(struct stack *s)
{
    return s->arr[s->top];
}

char *infix_to_postfix(char exp[])
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 50;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(exp) + 1) * sizeof(char));

    int i = 0;
    int j = 0;
    while (exp[i] != '\0')
    {
        if (!isoperator(exp[i]))
        {
            postfix[j] = exp[i];
            i++;
            j++;
        }
        else
        {
            if (presidence(exp[i]) > presidence(stacktop(s)))
            {
                push(s, exp[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(s);
                j++;
            }
        }
    }
    if (!isempty(s))
    {
        while (!isempty(s))
        {
            postfix[j] = pop(s);
            j++;
        }
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{

    char exp[50] = "5+8*7*38-4/9";
    printf("Infix expression : %s\n", exp);
    printf("Postfix expression : %s\n", infix_to_postfix(exp));
    return 0;
}
