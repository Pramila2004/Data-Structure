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

struct node *deletion_first(struct node *head){

    struct node *ptr=head;
    while(ptr->next != head){
        ptr=ptr->next;
    }

    ptr->next=head->next;
    free(head);
    head=ptr->next;
    return head;
}

struct node *deletion_end(struct node *head){

    struct node *p=head;
    struct node *q=p->next;
    while(q->next != head){
        p=p->next;
        q=q->next;
    }

    p->next=q->next;
    free(q);

    return head;
}

struct node *deletion_index(struct node *head,int index){

    struct node *p=head;
    struct node *q=p->next;
    int i=0;
    while(i < index-1){
        p=p->next;
        q=q->next;
        i++;
    }

    p->next=q->next;
    free(q);

    return head;
}
struct node *deletion_after(struct node *head,int val){
    struct node *p=head;
    struct node *q=p->next;

     while(q->data != val && q->next!=head){
        p=p->next;
        q=q->next;
        
    }
    if(p->data==val){
    p->next=q->next;
    free(q);
    return head;
    }
   

   
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

    // traversal(head);
    // head=deletion_first(head);2

    // traversal(head);

    // traversal(head);
    // head=deletion_end(head);
    // traversal(head);

    // int index;
    //  printf("Enter index to delete in to the link list :");
    //  scanf("%d",&index);
    // traversal(head);
    // head=deletion_index(head,index);
    // traversal(head);
    int value;
     printf("Enter value to delete the node afrer that value from the link list :");
     scanf("%d",&value);
    traversal(head);
    head=deletion_index(head,value);
    traversal(head);
    return 0;
}