#include <stdio.h>

int main(void)
{
    int firstNumber, secondNumber, summ;
    summ = 0;

    scanf("%d", &firstNumber);
    scanf("%d", &secondNumber);

    for(firstNumber;firstNumber < secondNumber;firstNumber++)
    {
        summ += (firstNumber*firstNumber);
    }

    printf("Summ is %d", summ);

    return 0;
}