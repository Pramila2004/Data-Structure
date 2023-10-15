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
    traversal(head);
    traversal_revers(four);
    return 0;
}