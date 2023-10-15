#include <stdio.h>
void Array_taversal(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int Array_search(int arr[],int element,int size){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return 0;
    
}

int main(){
    int arr[20]={1,7,6,6,89,2,3,4,5},size =9,element;
    printf("Enter the element that you want to search :\n");
    scanf("%d",&element);
   
    int result= Array_search(arr,element,size);
    if(result==0){
        printf("%d Element not in the array \n",element);
        printf("Your Array : ");
         Array_taversal(arr,size);
    }
    else{
        printf("%d Element is in the array at index %d \n",element,result);
    }

    return 0;
}