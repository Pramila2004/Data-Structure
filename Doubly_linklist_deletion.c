#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *pre;
};

void traversal(struct node *head){
    
    while (head != NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

void traversal_revers(struct node *four){
    
    while (four != NULL)
    {
        printf("%d ",four->data);
        four=four->pre;
    }
    printf("\n");
}

struct node *deletion_first(struct node *head){
    struct node *ptr=head;
    head=head->next;
    head->pre=NULL;
    free(ptr);
    return head;
}




struct node* deletion_end(struct node *head){
    struct node *p=head;
     struct node *q=p->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    
    p->next=q->next;

    free(q);
    return head;

}

struct node* deletion_between(struct node *head,int index){
    struct node *p=head;
     struct node *q=p->next;
     int i=0;
    while(i<index-1){
        p=p->next;
        q=q->next;
        i++;
    }
    
    p->next=q->next;

    free(q);
    return head;

}
struct node* deletion_value(struct node *head,int val){
    struct node *p=head;
     struct node *q=p->next;
     
    while(q->data!=val){
        p=p->next;
        q=q->next;
       
    }
    
    p->next=q->next;
    free(q);
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
    head->pre=NULL;

    second->data=2;
    second->next=third;
    second->pre=head;

    third->data=3;
    third->next=four;
    third->pre=second;

    four->data=4;
    four->next=NULL;
    four->pre=third;

    // traversal(head);
    // head=deletion_first(head);
    // traversal(head);
    // traversal_revers(four);

    // traversal(head);
    // head=deletion_end(head);
    // traversal(head);
    
    
    // int index;
    // printf("Enter the Index you want to delete\n");
    // scanf("%d", &index);
    // printf("Your array Before deletion :\n");
    // traversal(head);
    // head=deletion_between(head,index);
    // printf("Your array After deletion :\n");
    // traversal(head);
    
    int val;
    printf("Enter the value you want to delete\n");
    scanf("%d", &val);
    printf("Your array Before deletion :\n");
    traversal(head);
    head=deletion_value(head,val);
    printf("Your array After deletion :\n");
    traversal(head);

    return 0;
}