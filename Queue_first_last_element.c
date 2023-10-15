#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int front;
    int rare;
    int *arr;
};

int queue_first_element(struct queue *q){
    return q->arr[q->front];
}
int queue_last_element(struct queue *q){
    return q->arr[q->rare];
}

int isfull(struct queue *q){
    if(q->rare == q->size-1){
      return 1;
    }
    else{
        return 0;

    }
}
int isempty(struct queue *q){
    if(q->rare == q->front){
       return 1;
    }
    else{
       return 0;

    }
}

void enqueue(struct queue *q , int val){
    if(isfull(q)){
        printf("Queue is full\n");
    }
    else{
        q->rare++;
        q->arr[q->rare]=val;
    }

}
int dequeue(struct queue *q){
    int val;
    if(isempty(q)){
        printf("Queue is empty\n");
    }
    else{
        q->front++;
        val=q->arr[q->front];
        return val;
    }

}

int main(){
    
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->size=20;
    q->front=q->rare= -1;
    q->arr=(int *)malloc(q->size * sizeof(int));
    enqueue(q,30);
    enqueue(q,3);
    enqueue(q,90);
    dequeue(q);
    int first=queue_first_element(q);
    int last=queue_last_element(q);
    printf("First element is %d \n",first);
    printf("Last element is %d \n",last);

    return 0;
}