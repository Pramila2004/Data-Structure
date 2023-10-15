#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int top=-1;
int size=50;



void push(char stack[],char data){
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

int presidence(char A){
    if (A == '(')
    {
        return 0;
    }
    
    if (A=='+' || A=='-')
    {
        return 1;
    }
    if (A=='*' || A=='/' || A=='%')
    {
        return 2;
    }
    
}

int stacktop(char stack[]){
    return stack[top];
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
    char stack[20];
    
    char exp[50]="9-((3*4)*8)/4";
    // char exp[50]="1+2*3";
    printf("Your Infix Expression : %s\n",exp);
    // char exp[50];
    // printf("Enter your Expression : ");
    //  scanf("%s",&exp);

    int length=strlen(exp);
    exp[length]=')';

    push(stack,'(');
    int postfix[50];
    int i=0;
    int j=0;
    char popped;
    while (exp[i] != '\0')
    {
        if(isoparand(exp[i]))
        {
            postfix[j]=exp[i];
            j++;
          
        }


        else if (exp[i] == '(')
        {
            push(stack,'(');
        }

        else if (exp[i] == ')')
        {
            
            while ((popped=pop(stack)) != '(')
            {
                postfix[j]=popped;
                j++;
                
            }
              
        }
     

        else 
        {
            while (presidence(stacktop(stack)) >= presidence(exp[i]))
            {
                postfix[j]=pop(stack);
                j++;
            }
            push(stack,exp[i]);
            
        }

 


        i++;
        

        
    }

    if (top != -1){

        while (top != -1)
        {
            postfix[j] = pop(stack);
            j++;
        }
    }
     postfix[j] = '\0';
   
        
    
 i=0;
 printf("Your Postfix Expression : ");
while (postfix[i] != '\0')
{
    printf("%c",postfix[i]);
    i++;
}

    
  

    
    return 0;
}