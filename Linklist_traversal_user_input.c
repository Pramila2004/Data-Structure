#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}head;

void traversal(struct node *head){
    int i=0;
    while (i <5)
    {
        printf("%d ",head->data);
        head=head->next;
        i++;
    }
    printf("\n");
    
    
}


int main(){
 int size;

printf("Enter how many nodes you want to create : ");
scanf("%d",&size);

struct node *head[5];
printf("Enter your element : \n");

for (int i = 0; i < 5; i++)
{
    head[i]=(struct node *)malloc(sizeof(struct node));
    scanf("%d",head[i]->data);
    head[i]->next=head[i+1];
}


traversal(head[1]);
    

    
    return 0;
}