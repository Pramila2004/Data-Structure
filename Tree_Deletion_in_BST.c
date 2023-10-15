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

struct node *inorder_predesessor(struct node *root){
    root=root->left;
    while (root != NULL)
    {
        root=root->right;
    }
    return root;
    
    
}

struct node *deletion(struct node *root,int key){
    struct node *ipre;

    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL )
    {
        free(root);
        return NULL;
    }
    
    // search for node 
    if (key < root->data)
    {
        
        root->left=deletion(root->left,key);

    }
    else if (key > root->data)
    {
       root->left = deletion(root->right,key);
    }

    // deletion when the node found
    else
    {
       ipre=inorder_predesessor(root);
       root->data=ipre->data;
       root->left=deletion(root->left,ipre->data);

    }
    
    
   return root; 


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
    deletion(p1,20);
    printf("\n");
    inorder_traversal(p1);
    
    return 0;
}