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

void inorder_traversal(struct node *root){
    if (root != NULL)
    {
       
        inorder_traversal(root->left);
        printf("%d\t",root->data);
        inorder_traversal(root->right);
        

    }

}

void insertion(struct node *root,int key){
  
    struct node *prev;

    while (root != NULL)
    {
        prev=root;
      if (root->data == key)
      {
          printf("Cannot insert %d all ready in BST \n",prev->data);
          return ;
      }  
      else if (key < root->data)
      {
          root=root->left;
      }
      
      else 
      {
          root=root->right;
      }
         
    }

    struct node *new=create_node(key);
    if (key < prev->data)
    {
        prev->left=new;
    }
    else
    {
         prev->right=new;
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

    int element;

    printf("Enter your element that you want to insert in to the BST : ");
    scanf("%d",&element);
    inorder_traversal(p1);
    insertion(p1,element);
    printf("\n");
    inorder_traversal(p1);

    
    return 0;
}