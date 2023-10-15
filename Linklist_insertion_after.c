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

struct node* insertion_at_after(struct node *head,struct node *pre,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    
    ptr->next=pre->next;
    pre->next=ptr;
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
    printf("Enter Element you want to enter in to link list after second node :\n");
    scanf("%d", &element);
    printf("Your array Before insertion :");
    traversal(head);
    head=insertion_at_after(head,second,element);
    printf("Your array After insertion :");
    traversal(head);
    return 0;
}