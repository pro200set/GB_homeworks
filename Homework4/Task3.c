#include <stdio.h>

int main(void)
{
    int number;

    scanf("%d", &number);

    for(int i = 0;number > 1;i++)
    {
        int remainder = number%10;

        if(remainder%2 != 0)
        {
            printf("NO");
            return 0;
        }

        number = number/10;
    }

    printf("YES");
    return 0;
}