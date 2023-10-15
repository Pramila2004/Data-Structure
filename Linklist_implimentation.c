#include <stdio.h>
#include <stdlib.h>

//structure to creating an node

struct node{
    int data;
    struct node *next;
};




int main(){

    //creating four nodes;

    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth=(struct node *)malloc(sizeof(struct node));

    
    return 0;
}