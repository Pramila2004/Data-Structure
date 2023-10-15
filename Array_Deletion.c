#include <stdio.h>
#include <stdlib.h>

void Array_taversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Array_deletion(int arr[],int  index,int  size)
{

    if (index > size)
    {
        printf("We canot delete element of this index because %d index not present in array ", index);
        exit(0);
    }
    int i;

    for (i = index; i < (size - 1); i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[20] = {2, 4, 6, 7, 4, 1, 9, 0}, index, size = 8;
    printf("Enter the Index you want to delete :\n");
    scanf("%d", &index);

    printf("Your Arry before Deletion :\n");
    Array_taversal(arr, size);
    Array_deletion(arr, index, size);
    printf("Your Arry after Deletion :\n");
    Array_taversal(arr, size-1);
    return 0;
}

