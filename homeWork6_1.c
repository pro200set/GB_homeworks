#include <stdio.h>

void print_num(int num)
{
    int n = num;
    int degree = 0;
    int nextNumber;

    while (n >= 10)
    {
        n /= 10;
        degree++;
    }

    printf("%d ", n);
    
    if(num > 10)
    {
        degree = power(degree);

        nextNumber = num - n*degree;

        print_num(nextNumber);
    }
}

int power(int degree)
{
    int cell = 1;
    for(int i=0;i<degree;i++)
    {
        cell *= 10;
    }
    return cell;
}

int main(void)
{
    int num;
    scanf("%d", &num);
    print_num(num);
}