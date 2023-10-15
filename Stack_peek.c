#include <stdio.h>
#include <stdlib.h>
struct stack{
    int data;
    struct stack *next;
 
};

void show(struct stack *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}


struct stack* push(struct stack *top,int data){
   
   struct stack *ptr=(struct stack *)malloc(sizeof(struct stack));
     ptr->data=data;
     ptr->next=top;
    top=ptr;
    return top;
}

int peek(struct stack *top,int position){
     struct stack *ptr=top;
     for(int i=0;(i<position-1 && ptr != NULL);i++){
         ptr=ptr->next;
     }
     if(ptr!=NULL){
         return ptr->data;

     }
     else{
         return -1;
     }
}
int main(){
    struct stack *top=(struct stack *)malloc(sizeof(struct stack));
    top=NULL;
    top=push(top,46);
    top=push(top,4);
    top=push(top,68);
    top=push(top,49);
    for(int i=1;i<=4;i++){
        printf("position %d and element is %d\n",i,peek(top,i));
    }

    return 0;
}