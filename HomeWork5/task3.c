#include <stdio.h>
#include <stdbool.h>

bool isSummEqualsProduct(int number)
{
    int summ = 0;
    int product = 1;

    for(;number > 0;)
    {
        int one = number%10;
        summ = summ + one;
        product = product*one;
        number = number/10;
    }
    return summ == product;
}

int main(void)
{
    int number;

    scanf("%d", &number);

    bool result = isSummEqualsProduct(number);

    if(result)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}