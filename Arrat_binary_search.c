#include <stdio.h>

void Array_taversal(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int Array_binary_search(int arr[],int element,int size){
    int high=size;
    int low=0;
    int i=0;
    while(i<size){
    int mid=(high+low)/2;
    if(element==arr[mid]){
        return 1 ;
    }
    else if(element>mid){
        low=mid;
    }
    else{
        high=mid;
    }
    i++;
    }
    
    
}

int main(){
    int arr[20]={4,6,7,8,9,12,14},size=7,element;
    printf("Enter the Element you want to search :\n");
    scanf("%d",&element);

    int result=Array_binary_search(arr,element,size);
    if(result==1){
        printf("%d is present in the array\n",element);
    }
    else{
        printf("%d is not  present  in the array \n",element);
    }

    return 0;
}