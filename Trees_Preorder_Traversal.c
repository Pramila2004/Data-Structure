#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}

// preorder = root -> left ->right

void preorder(struct node *root){
    if (root != NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);

    }
    
}
//      1

//   2     3

// 4  5   6  NULL

    // 1 2 4 5 3 6
int main(){

    struct node *p=create_node(1);
    struct node *p1=create_node(2);
    struct node *p2=create_node(3);
    struct node *p3=create_node(4);
    struct node *p4=create_node(5);
    struct node *p5=create_node(6);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    preorder(p);
    return 0;
}