#include <stdio.h>

void from_a_to_b(int a, int b)
{
    if(a > b)
    {
        printf("%d ", a);
        a--;
        from_a_to_b(a,b);
    }
    else if(a < b)
    {
        printf("%d ", a);
        a++;
        from_a_to_b(a,b);
    }
    else
    {
        printf("%d", a);
    }
}

int main(void)
{
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    from_a_to_b(a,b);    
}