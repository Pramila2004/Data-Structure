#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    char *arr;
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

int match(char a,char b){
    if (a=='(' && b==')')
    {
        return 1;
    }
    if (a=='[' && b==']')
    {
        return 1;
    }
    if (a=='{' && b=='}')
    {
        return 1;
    }
    return 0;
    
}

int parenthesis_matching(char exp[]){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->top= -1;
    s->size= 10;
    s->arr=(char *)malloc(s->size * sizeof(char));
    for (int i = 0;exp[i]!='\0'; i++)
    {
       if (exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
       {
           push(s,exp[i]);
       }
       else if(exp[i]==')' || exp[i]==']' || exp[i]=='}'){
           if (isempty(s))
           {
               return 0;
           }
           char popped_char=pop(s);
           if(match(popped_char,exp[i])){
               return 1;
           }
           
       }
       
    }
    if (isempty(s))
    {
        return 1;
    }
    else{
        return 0;
    }
    
     
}
int main(){

     char exp[50]="{([9*9])}";
    if(parenthesis_matching(exp)){
        printf("Pranthesis is balanced");
    }
    else{
         printf("Pranthesis is not balanced"); 
    }
    
    return 0;
}


















