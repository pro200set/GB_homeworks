#include <stdio.h>

int summFunction(int number)
{
    int result = 0;
    for(int i = 1;i <= number;i++)
    {
        result = result + i;
    }
    return result;
}

int main(void)
{
    int number;

    scanf("%d", &number);

    int summ = summFunction(number);

    printf("Summ is %d", summ);

    scanf("%d", &number);

    return 0;
}