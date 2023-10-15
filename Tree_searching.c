#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

//      50

//   40     60

// 20  44   58  NULL

void inorder_traversal(struct node *root){
   if (root != NULL)
   {
      inorder_traversal(root->left);
      printf("%d\t",root->data);
      inorder_traversal(root->right);
   }
   
    
}

struct node *search(struct node *ptr,int key){
    if(ptr==NULL){
        return NULL;
    }
    if(ptr->data==key){
        return ptr;
    }
    else if(ptr->data > key){
        search(ptr->left,key);
    }
    else
    {
       search(ptr->right,key); 
    }
    
}


int main(){

    struct node *p1=create_node(50);
    struct node *p2=create_node(40);
    struct node *p3=create_node(60);
    struct node *p4=create_node(20);
    struct node *p5=create_node(44);
    struct node *p6=create_node(58);
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    p3->left=p6;

    inorder_traversal(p1);
    int key;
    printf("\nEnter the number you want to search : ");
    scanf("%d",&key);
    struct node*ptr=search(p1,key);
    if (ptr!=NULL)
    {
        printf("%d element found\n",ptr->data);
    }
    else
    {
         printf("Search Unsuccessfull\n"); 
    }
    
    
    

    return 0;
}