#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traversal(struct node *head){
    struct node * ptr=head;
    do{
         printf("%d ",ptr->data);
         ptr=ptr->next;
    }while(ptr != head);

    printf("\n");
}
int main(){
    
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *four;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    four=(struct node *)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=four;

    four->data=4;
    four->next=head;

    traversal(head);
    return 0;
}