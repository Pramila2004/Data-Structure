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

struct node* deletion_at_first(struct node *head){
   
    struct node *ptr;
    ptr=head;
    head=head->next;
    free(ptr);
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
    
    printf("Your array Before deletion :\n");
    traversal(head);
    head=deletion_at_first(head);
    printf("Your array After deletion :\n");
    traversal(head);
    return 0;
}