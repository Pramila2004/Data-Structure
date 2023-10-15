#include <stdio.h>
#include <stdlib.h>

int front= -1;
int rare= -1;
int size= 10;

void enqueue(int Queue[],int data){
    if (rare == size-1)
    {
      printf("Queue is full\n");
      exit(0);
    }

    else if(rare == -1 && front == -1){
        front=rare=0;
        Queue[rare]=data;
    }

    else{
        rare++;
        Queue[rare]=data;

    }
    
}

int dequeue(int Queue[]){
     int val=0;
    if(front == rare+1){
        printf("Queue is Empty\n");
        exit(0);
    }

    
    else{
        
        
        val=Queue[front];
        front++;
        return val;
        
    }
}

void traversal(int Queue[]){
    printf("\nYour Queue :\n");
    int i = front;
    while (i < rare+1)
    {
        printf("%d\n", Queue[i]);
        i++;
    }
    printf("\n");
}

int main(){

    int Queue[size];
    start:

    printf("1. Enquque\n");
    printf("2. dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    int ch;
    int numbers;
    int dequeued;

    printf("Enter your choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
        printf("How many elements you want to push in to the array\n");
        scanf("%d", &numbers);
        int arr[10];
        printf("Enter your elements : \n");
        for (int i = 0; i < numbers; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < numbers; i++)
        {
            enqueue(Queue, arr[i]);
        }
      
    }
    break;
    case 2:
    {
        printf("How many elements you want to popped from Stack\n");
        scanf("%d", &dequeued);
        for (int i = 0; i <dequeued; i++)
        {
         printf("%d Element dequeued from the Queue\n", dequeue(Queue));
        }
    }
    break;

    case 3:
    {
        traversal(Queue);
    }
    break;
    case 4:
    {
        exit(0);
    }
    break;
    default:
        printf("Enter valid input !!!\n");
        break;
    }

    goto start;
    
    return 0;
}