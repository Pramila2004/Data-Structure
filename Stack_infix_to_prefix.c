#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    char stack[30];
    char exp[50]="1+3*4/2";
    printf("Your Infix Expression : %s\n",exp);
    strrev(exp);
    int lengthexp=strlen(exp);
    exp[lengthexp]='\0';
    int p=0;
    while(exp[p] != '\0')
    {
        if(exp[p]=='('){
            exp[p]=')';
        }
        else if(exp[p]==')'){
            exp[p]='(';
        }
        p++;

    }
 
printf("Your Infix Expression : %s\n",exp);
int length=strlen(exp);
    exp[length]=')';

    push(stack,'(');
    char prefix[50];
    int i=0;
    int j=0;
    char popped;
    while (exp[i] != '\0')
    {
        if(isoparand(exp[i]))
        {
            prefix[j]=exp[i];
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
                prefix[j]=popped;
                j++;
                
            }
              
        }
     

        else 
        {
            while (presidence(stacktop(stack)) >= presidence(exp[i]))
            {
                prefix[j]=pop(stack);
                j++;
            }
            push(stack,exp[i]);
            
        }

 


        i++;
        

        
    }

    if (top != -1){

        while (top != -1)
        {
            prefix[j] = pop(stack);
            j++;
        }
    }
     prefix[j] = '\0';
   
        
    strrev(prefix);
    int l=strlen(prefix);

    prefix[l] = '\0';

   
    i=0;
    printf("Your prefix Expression : ");
    while (i<=l)
{
    printf("%c",prefix[i]);
    i++;
}
    
    return 0;
}