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

struct node* insertion_at_between(struct node *head,int element,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=element;
    struct node *p=head;
    int i=0;
    while (i!=index-1)
    {
      p=p->next;
      i++; 

    }
    
    ptr->next=p->next;
    p->next=ptr;
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
    int element,index; 
    printf("Enter Element you want to insert in between :\n");
    scanf("%d", &element);
    printf("Enter index:\n");
    scanf("%d", &index);
    traversal(head);
    head=insertion_at_between(head,element,index);
    traversal(head);
    return 0;
}