#include <stdio.h>

int nod(int firstNumber, int secondNumber)
{
    int min = firstNumber;
    if(secondNumber < firstNumber)
    {
        min = secondNumber;
    }

    int result = 1;

    for(int i = 1;i<min;i++)
    {
        if(firstNumber%i == 0 && secondNumber%i == 0)
        {
            result = i;
        }
    }

    return result;
}

int main(void)
{
    int firstNumber, secondNumber;

    printf("First number is ");
    scanf("%d", &firstNumber);
    
    printf("Second number is ");
    scanf("%d", &secondNumber);

    int result = nod(firstNumber, secondNumber);

    printf("Nod is %d", result);

    return 0;
}