#include <stdio.h>

 void show(int arr[], int size){
    int i=0;
    while(i<size){
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}


void merge_sort(int arr1[],int arr2[],int arr3[],int m,int n){
    int i=0,j=0,k=0;
    while (i<m && j<n)
    {
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++,k++;
        }
        else{
             arr3[k]=arr2[j];
            j++,k++;
        }
    }

    while(i<m){
             arr3[k]=arr1[i];
            i++,k++;
    }
    while(j<n){
             arr3[k]=arr2[j];
            j++,k++;
    }
    
}


int main(){
    int arr1[10]={1,2,3,4,5,6,7};
    int arr2[10]={8,9,10,11,12,13,14};
    int arr3[14];
    show(arr1,7);
    show(arr2,7);
    merge_sort(arr1,arr2,arr3,7,7);
    show(arr3,14);
    return 0;
}
