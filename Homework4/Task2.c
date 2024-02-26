#include <stdio.h>

int main(void)
{
    int number, i = 1;

    scanf("%d", &number);

    for(i;number > 1;i++)
    {
        number = number/10;
    }

    if(i == 3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}