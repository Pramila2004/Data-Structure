#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int front;
    int rare;
    int priority;
    int *arr;
};

int isfull(struct queue *q){
    if(q->rare == q->size-1){
        printf("Queue is full\n");
    }
    else{
        printf("Queue is not full\n");

    }
}
int isempty(struct queue *q){
    if(q->rare == q->front){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");

    }
}

void enqueue(struct queue *q , int val, int priority){
    if(isfull(q)){
        printf("Queue is full\n");
    }
    else{
        
    }

}



int main(){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));

    q->size=10;
    q->front=q->rare= -1;
    q->arr=(int *)malloc(q->size * sizeof(int));
    
    return 0;
}