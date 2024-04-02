#include <stdio.h> 

int is_two_same(int size, int arr[])
{
    for(int i=0;i<size;i++)
    {
        for(int b=i+1;b<size;b++)
        {
            if(arr[i] == arr[b])
            {
                return 1;
            }
        }
    }
    return 0;
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

    if(is_two_same(arrSize, array) == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 1;
}