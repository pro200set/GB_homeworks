#include <stdio.h> 

void sort_array(int size, int arr[])
{
    for(int i=0;i<size-1;i++)
    {
        for(int b=i+1;b<size;b++)
        {
            if(arr[i] > arr[b])
            {
                int tmp = arr[i];
                arr[i] = arr[b];
                arr[b] = tmp;
            }
        }
    }
}

int main(void)
{
    int arrSize;

    scanf("%d", &arrSize);

    int array[arrSize];

    for(int i=0;i<arrSize;i++)
    {
        scanf("%d", &array[i]);
    }

    sort_array(arrSize, array);

    for(int i=0;i<arrSize;i++)
    {
        printf("%d ", array[i]);
    }
}