#include <stdio.h>

#define SIZE 5

int main(void)
{
    int arr[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for(int i=1;i<SIZE;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("%d", min);
}