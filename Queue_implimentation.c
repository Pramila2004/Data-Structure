#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int front;
    int rare;
    int *arr;
};

int main(){

    struct queue *q;
    q->size=20;
    q->front=q->rare= -1;
    q->arr=(int *)malloc(q->size * sizeof(int));
    
    return 0;
}