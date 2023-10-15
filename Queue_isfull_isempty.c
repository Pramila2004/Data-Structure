#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int front;
    int rare;
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


int main(){

    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->size=20;
    q->front=q->rare= -1;
    q->arr=(int *)malloc(q->size * sizeof(int));
    isempty(q);
    isfull(q);

    
    return 0;
}