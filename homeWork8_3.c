#include <stdio.h> 

int find_max_array(int size, int arr[])
{
    int max = arr[0];

    for(int i=1;i<size;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
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

    printf("%d", find_max_array(arrSize, array));

    return 1;
}