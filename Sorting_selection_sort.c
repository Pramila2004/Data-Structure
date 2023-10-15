 #include <stdio.h>

 void show(int arr[], int size){
    int i=0;
    while(i<size){
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}

void selection_sort(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        int min=i;
        for (int  j = i+1; j < size; j++)
        {
            if (arr[min]>arr[j])
            {
               min=j;
            }
            
        }
        int temp =arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
    }
    
}

 int main(){
    int arr[10]={4,6,1,5,3,0,5};
    show(arr,7);
    selection_sort(arr,7);
    show(arr,7);
     return 0;
 }