#include <stdio.h>

int numberGrainsPerCell(int chessSquare)
{
    int result = 1;
    for(int i = 1; i < chessSquare;i++)
    {
        result = result*2;
    }
    return result;
}

int main(void)
{
    int chessSquare = 0;

    printf("Chess square is ");

    scanf("%d", &chessSquare);

    int result = numberGrainsPerCell(chessSquare);

    printf("Number of grains on cell %d is %d", chessSquare, result);

    return 0;
}

