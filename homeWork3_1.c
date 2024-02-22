#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a = INT_MIN, b;

    scanf("%d", &b);

    if(b > a) 
    {
        a = b;
    }

    scanf("%d", &b);

    if(b > a) 
    {
        a = b;
    }

    scanf("%d", &b);

    if(b > a) 
    {
        a = b;
    }

    scanf("%d", &b);

    if(b > a) 
    {
        a = b;
    }

    scanf("%d", &b);

    if(b > a) 
    {
        a = b;
    }

    printf("%d", a);
}