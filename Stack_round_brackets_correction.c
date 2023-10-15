#include <stdio.h>
#include <stdlib.h>

struct stack{
    int top;
    int size;
    char *arr;
};

int isempty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top ==ptr->size -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr, char val){
    if(isfull(ptr)){
       printf("stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;

    }
}
char pop(struct stack *ptr){
    if(isempty(ptr)){
       printf("stack underflow\n");
    }
    else{
     
        char val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int paranthesis_matching(char exp[]){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->top= -1;
    s->size= 10;
    s->arr=(char *)malloc(s->size * sizeof(char)); 
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(s,'(');
        }
        else  if(exp[i]==')'){
            if(isempty(s)){
                return 0;
            }
            pop(s);
        }
    }
    if(isempty(s)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char exp[20]="(8*5*6";
   
    if(paranthesis_matching(exp)){
        printf("expresion is balanced\n");
    }
    else{
         printf("expresion is not balanced\n");
    }

    return 0;
}