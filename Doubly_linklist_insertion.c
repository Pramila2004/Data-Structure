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


struct node *insertion_first(struct node *head,int element){
      
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=element;
    
    head=head->next;
    head->pre=ptr;
    ptr->next=head;
    ptr->pre=NULL;
    return ptr;
}

struct node *insertion_end(struct node *head,int element){
      
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=element;
    struct node *p=head;
    while(p->next != NULL){
        p=p->next;
    }
    ptr->next=NULL;
    p->next=ptr;
    ptr->pre=p;
    
    
    return head;
}

struct node *insertion_after(struct node *head,struct node *pre,int element){
      
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=element;
    ptr->next=pre->next;
    ptr->pre=pre;
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

    // int element;
    // printf("Enter Element you want to enter in to link list in top :\n");
    // scanf("%d", &element);
    // traversal(head);
    // head=insertion_first(head,element);
    // traversal(head);
    // traversal_revers(four);

//     int element;
//     printf("Enter Element you want to enter in to link list in end :\n");
//     scanf("%d", &element);
//     traversal(head);
//     head=insertion_end(head,element);
//    // traversal(head);
//     traversal_revers(head);

    // int element,index;
    // printf("Enter Element you want to enter in to link list :\n");
    // scanf("%d", &element);
    // printf("Enter index you want to enter in to link list :\n");
    // scanf("%d", &index);
    // traversal(head);
    // head=insertion_between(head,element,index);
    // traversal(head);
    // //traversal_revers(head);

    int element;
    printf("Enter Element you want to enter in to link list :\n");
    scanf("%d", &element);
    
    traversal(head);
    head=insertion_after(head,second,element);
    traversal(head);
    //traversal_revers(head);
    return 0;
}