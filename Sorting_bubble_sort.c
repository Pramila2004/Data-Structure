#include <stdio.h>
void Array_taversal(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

 void bubble_sort(int arr[],int size){
    int issorted;
     for (int i = 0; i < size-1 ; i++)
     {
         printf("pass : %d\n",i+1);

        issorted=1;
        for (int  j = 0; j < size-1-i ; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted=0;
            }
            Array_taversal(arr,size);

        }
       if(issorted){
        return;
    }
     
     }
     
 }


int main(){
    int arr[10],size;
    printf("Enter the size of your array : ");
    scanf("%d",&size);

    printf("Enter your array : \n");
    for (int i = 0; i < size; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Your Entered Array : \n");
    Array_taversal(arr,size);
    bubble_sort(arr,size);
    printf("Your sorted Array : \n");
    Array_taversal(arr,size);
    
   

    return 0;
}






















