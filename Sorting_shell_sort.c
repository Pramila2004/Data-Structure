#include <stdio.h>

void show(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

void shell_sort(int arr[],int size){
    for (int  gap = size/2; gap>=1; gap=gap/2)
    {
        for (int j =gap ; j < size; j++)
        {
           for (int i = j-gap; i >=0; i=i-gap)
           {
              if (arr[i+gap]>arr[i]){
                  break;
              }
              else{
                int temp=arr[i];
                arr[i]=arr[i+gap];
                arr[i+gap]=temp;  
              }
              
           }
           
        }
        
    }
    
}


int main()
{
    int arr[10] = {4, 6, 1, 5, 3, 0, 5};
    show(arr, 7);
    shell_sort(arr, 7);
    show(arr, 7);
    return 0;
}
