#include <stdio.h>

int main(void)
{
    int number;
    int result = 0;

    scanf("%d", &number);

    for(int i = 0;number > 0;i++)
    {
        int remainder = number%10;

        result = result*10 + remainder;

        number = number/10;
    }

    printf("%d", result);

    return 0;
}