#include <stdio.h>



void show(int arr[], int size){
    int i=0;
    while(i<size){
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}

void insertion_sort(int arr[],int size){
    for (int i = 1; i < size-1; i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key){
           arr[j+1]=arr[j];
           j--; 
        }
        arr[j+1]=key;
        
        
    }
    
}


int main(){
    int arr[10]={4,6,1,5,3,0,5};
    show(arr,7);
    insertion_sort(arr,7);
    show(arr,7);
    return 0;
}