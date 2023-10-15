#include <stdio.h>
#include <stdlib.h>
struct Circular_queue
{
    int size;
    int front;
    int rare;
    int *arr;

};

int isfull(struct Circular_queue *q){
    if ((q->rare+1)%q->size == q->front)
    {
      return 1;  
    }
    else
    {
        return 0;
    }
    
    
}
int isempty(struct Circular_queue *q){
    if (q->rare == q->front)
    {
      return 1;  
    }
    else
    {
        return 0;
    }
    
    
}

int enqueue(struct Circular_queue *q,int data){
    if (isfull(q))
    {
        printf("Queue is full\n");
        exit(0);
    }
    else
    {
        q->rare=(q->rare+1)%q->size;
        q->arr[q->rare]=data;
        printf("%d element enqueued into the circular queue\n ",data);
    }
    
    
}

int dequeue(struct Circular_queue *q){
    int val= -1;
    if (isempty(q))
    {
        printf("Queue is empty\n");
         exit(0);
    }
    else
    {
        
        q->front=(q->front+1) % q->size;
        val=q->arr[q->front];
        return val;
    }
    
    
}


int main(){

    struct Circular_queue *q=(struct Circular_queue *)malloc(sizeof(struct Circular_queue));
    q->size=4;
    q->front=q->rare= 0;
    q->arr=(int *)malloc(q->size * sizeof(int));

    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    printf("%d element dequeue from Queue\n",dequeue(q));
    printf("%d element dequeue from Queue\n",dequeue(q));
    printf("%d element dequeue from Queue\n",dequeue(q));
    enqueue(q,4);
    enqueue(q,5);
    printf("%d element dequeue from Queue\n",dequeue(q));
    printf("%d element dequeue from Queue\n",dequeue(q));
  
    enqueue(q,11);
    enqueue(q,12);
    enqueue(q,13);
    printf("%d element dequeue from Queue\n",dequeue(q));
    enqueue(q,14);

    
    return 0;
}