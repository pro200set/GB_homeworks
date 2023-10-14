#include <stdio.h>

#define SIZE 5

int main(void)
{
    int arr[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d", &arr[i]);
    }

    int summ = 0;

    for(int i=0;i<SIZE;i++)
    {
        summ += arr[i];
    }

    float average = (float)summ/SIZE;

    printf("%f", average);
}