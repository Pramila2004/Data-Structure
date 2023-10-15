#include <stdio.h>
#include <stdlib.h>

void Array_taversal(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}

int Array_insertion(int arr[],int element,int index,int size,int capacity){
    if(index>=capacity){
        printf("We can not insert on this index because capacity of array is only %d ",capacity);
        exit(0);
    }

    else{
        for (int i = (size-1); i >=index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        
    }
}
int main(){
  int arr[20]={4,5,6,3,2,8,0},element,index,size=7,capacity=20;
  printf("Enter the Element you want to insert :\n");
  scanf("%d",&element);
  printf("Enter the Index where you  want to insert insert this element :\n");
  scanf("%d",&index);

  printf("Your Arry before insertion :\n");
  Array_taversal(arr,size);
  Array_insertion( arr, element, index, size, capacity);
  printf("Your Arry after insertion :\n");
  Array_taversal(arr,size);
    return 0;
}









// #include <stdio.h>
// #include <stdlib.h>
// void insertion(int arr[], int num, int index, int size,int capacity)
// {
    
//     if(index >=capacity){
//         printf("you can note insert element at index %d because this index is not present in Array\n",index);
//         exit(0);
//     }
//     for (int i = (size-1); i >= index; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[index] = num;

// }
// void show(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     int num, index,capacity=10;
//     int arr[10] = {1, 3, 6, 8, 4};
//     printf("Enter the number you want to insert\n");
//     scanf("%d", &num);
//     printf("Enter the Index you want to insert\n");
//     scanf("%d", &index);
//     printf("Your array Before insertion :");
//     show(arr, 5);
//     insertion(arr,num,index,6,capacity);
//     printf("Your array After insertion  :");
//     show(arr, 6);
    
    
//     return 0;
// }