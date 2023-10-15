#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

void search(struct node *head,int search){
    struct node *ptr=head;
       while (ptr != NULL)
   {

        if(ptr->info == search){
           printf("Element fount Successfully !!\n");
           return ;
       }
       else
       {
           ptr=ptr->next;
       }
   }
   printf("Element not found\n");
       


}

int main()
{
    int number;

    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("How many elements you want to insert in to the Linklist : ");
    scanf("%d", &number);
    printf("Enter your Elements : \n");
    scanf("%d", &head->info);
    head->next = NULL;
    struct node *p = head;
    for (int i = 1; i < number; i++)
    {
        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
        p->next = NULL;
        scanf("%d", &p->info);
    }

    p=head;
    printf("Your Linklist : \n\n\n\t");
    
    while (p != NULL)
    {
        
        printf("%d\t",p->info);
        
        p=p->next;
    }
    printf("\n\n");

    
    int element;
    printf("Enter your element that you want to search : ");
    scanf("%d",&element);
    
 
   search(head,element);



    
    return 0;
}