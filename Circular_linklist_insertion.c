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

struct node *insetion_first(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head->next;
    while(p->next!=head){
         p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;  
    return head;
}

struct node *insetion_end(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head->next;
    while(p->next!=head){
         p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
  
    return head;
}
struct node *insetion_between(struct node *head,int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    int i=0;
    while(i<index-1){
         p=p->next;
         i++;
    }
    ptr->next=p->next;
    p->next=ptr;
  
    return head;
}
struct node *insetion_after(struct node *head,struct node *pre,int data){
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
    four->next=head;
    int element,index;

    printf("Enter your number to insert at first in circular link list :");
    scanf("%d",&element);
    traversal(head);
    head=insetion_first(head,element);
    traversal(head);

    
    // printf("Enter your number to insert at end to circular link list :");
    // scanf("%d",&element);
    // traversal(head);
    // head=insetion_end(head,element);
    // traversal(head);

    // printf("Enter your number to insert in link list :");
    // scanf("%d",&element);
    // printf("Enter your index to insert in link list :");
    // scanf("%d",&index);
    // traversal(head);
    // head=insetion_between(head,element,index);
    // traversal(head);
   

    // printf("Enter your number to insert after second node in  link list :");
    // scanf("%d",&element);  
    // traversal(head);
    // head=insetion_after(head,second,element);
    // traversal(head);
    return 0;
}