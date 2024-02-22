#include <stdio.h>

int main(void)
{
    int mounth;

    scanf("%d", &mounth);

    if (mounth == 12 || (mounth <=2 && mounth > 0))
    {
        printf("winter");
    }
    else if(mounth >= 3 && mounth <=5)
    {
        printf("spring");
    }
    else if(mounth >= 6 && mounth <=8)
    {
        printf("summer");
    }
    else if(mounth >= 9 && mounth <=11)
    {
        printf("autumn");
    }
    else
    {
        printf("Invalid mounth");
    }
}