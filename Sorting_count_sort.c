#include <stdio.h>
#include <stdlib.h>
 void show(int arr[], int size){
    int i=0;
    while(i<size){
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}

int maximun(int arr[],int size){
    
    int i=0;
    int max=arr[i];
    while(i<size){
        if(arr[i]>max){
            max=arr[i];
         
        }
        i++;
    }
    return max;
}

void count_sort(int arr[],int size){
    int i=0,j=0;
    int max=maximun(arr,size);
    int *sorted=(int *)malloc((max+1) * sizeof(int));

    while(i<=max){
        sorted[i]=0;
        i++;
    }
    for (int j = 0; j < size; j++)
    {
       sorted[arr[j]]++;
    }
    i=0,j=0;
    while (i<=max)
    {
        if(sorted[i]>0){
            arr[j]=i;
            sorted[i]--;
            j++;
        }
        else{
            i++;
        }
    }
    
    


}



int main(){
     int arr[10]={4,6,1,5,3,0,5};
    show(arr,7);
    count_sort(arr,7);
    show(arr,7);
    return 0;
}