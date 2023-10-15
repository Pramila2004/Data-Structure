#include <stdio.h>


void Array_taversal(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int main(){
  int arr[20],size;
  printf("Enter the size of your Arry\n");
  scanf("%d",&size);
  printf("Enter your Arry\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Your Arry :\n");
  Array_taversal(arr,size);
 
  return 0;
}