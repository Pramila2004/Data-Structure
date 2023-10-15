#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next; 
};


void traversal(struct node *head){
    
    while (head != NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
    
}

struct node* insertion_at_last(struct node *head,int element){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=element;
    struct node *p=head;
    while (p->next!=NULL)
    {
      p=p->next;  
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
    
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
    four->next=NULL;
    int element; 
    printf("Enter Element you want to enter in to link list at last :\n");
    scanf("%d", &element);
    traversal(head);
    head=insertion_at_last(head,element);
    traversal(head);
    return 0;
}