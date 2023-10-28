#include <stdio.h> 

void sort_even_odd(int size, int arr[])
{
    int odd[size];
    int even[size];
    int oddIndex = 0;
    int evenIndex = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            odd[oddIndex++] = arr[i];
        }
        else
        {
            even[evenIndex++] = arr[i];
        }
    }


    evenIndex--;
    int arrIndex = 0;

    for(int i=0;i<size;i++)
    {
        if(i > evenIndex)
        {
            arr[i] = odd[arrIndex];
        }
        else if(i < evenIndex)
        {
            arr[i] = even[arrIndex];
        }
        else
        {
            arr[i] = even[arrIndex];
            arrIndex = -1;
        }
        arrIndex++;
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

    sort_even_odd(arrSize, array);

    for(int i=0;i<arrSize;i++)
    {
        printf("%d ", array[i]);
    }
}
