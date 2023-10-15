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

struct node *Iterative_search(struct node *root,int key){

    while (root != NULL)
    {
        if(root->data==key){
            return root;
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

    return NULL;
    
}


int main(){

    int key;
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

    printf("Enter the number that you want to search : ");
    scanf("%d",&key);

    struct node *search=Iterative_search(p1,key);
    if (search != NULL)
    {
        printf("found : %d\n",search->data);

    }
    else
    {
        printf("Element not Found\n");
    }
    
    


    
    return 0;
}