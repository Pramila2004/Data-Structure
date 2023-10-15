#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top=-1;
int size=50;



void push(char stack[],int data){
    if(top == size-1){
        printf("stack overflow\n");
    }
    else{
        top++;
        stack[top]=data;

    }
}
char pop(char stack[]){
    if(top == -1){
        printf("stack Underflow\n");
    }
    else{
        char val=stack[top];
        top--;
        return val;
        

    }
}

int isoparand(char A){
    if (A == '(' ||A == ')' ||A == '+' || A == '-' ||A == '*' ||A == '/' ||A == '%')
    {
        return 0;
    }
    else
    {
        return 1;
    }
      
    
}



int isoperator(char A){
    if (A == '+' || A == '-' || A == '*' || A == '/' || A == '%')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}



int main(){
char stack[50];
char exp[50];
printf("Enter you postfix Expression : ");
gets(exp);


int i=0;
int operand_1;
int operand_2;
int add,subtract,division,multiplication,mod;
while (exp[i]!='\0')
{
    if (isoparand(exp[i]))
    {
        push(stack,exp[i]-'0');
    }

    else if(isoperator(exp[i])){
        operand_2=pop(stack);
        
        operand_1=pop(stack);
        
        if(exp[i]=='+'){
            add=operand_1+operand_2;
            push(stack,add);
        }
        else if(exp[i]=='-'){
            subtract=operand_1-operand_2;
            push(stack,subtract);
        }
        else if(exp[i]=='*'){
            multiplication=operand_1*operand_2;
            push(stack,multiplication);
        }
        else if(exp[i]=='/'){
            division=operand_1/operand_2;
            push(stack,division);
        }
        else if(exp[i]=='%'){
            mod=operand_1%operand_2;
            push(stack,mod);
        }

    }
    i++;
    
}

int result=pop(stack);
printf("%d is a result of given postfix expression\n",result);


    return 0;
}