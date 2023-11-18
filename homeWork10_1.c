#include <stdio.h>

void change_simbols(char string[])
{
    char second_simbol;
    int i = 1;

    while((second_simbol = string[i]) != '\0')
    {
        int first_simbol_possition = i - 1;

        if(string[i] == ' ')
        {
            i++;
        }        
        
        char boof = string[i];
        string[i] = string[first_simbol_possition];
        string[first_simbol_possition] = boof;
        i += 2;
    }
}

int main()
{
    char *filename = "alphabet.txt";

    // open the file for writing
    FILE *fp = fopen(filename, "r");

    char line[1024];

    fscanf(fp, "%[^\n]", line);

    fclose(fp);

    change_simbols(line);

    fp = fopen(filename, "w");

    fprintf(fp, "%s", line);

    return 0;
}