#include <stdio.h>

char * remove_unnecessary_spaces(char string[])
{
    char returnedString[1000];
    int returnedStringIndex = 0;
    char simbol;
    int i = 0;
    
    while((simbol = string[i]) != '\0')
    {
        if(i == 0 && simbol == ' ')
        {
            i++;
        }
        else if(string[i] == ' ' && string[i + 1] == ' ')
        {
            i++;
        }
        else
        {
            returnedString[returnedStringIndex] = string[i];
            returnedStringIndex++;
            i++;
        }
    }

    string = returnedString;
}

int main()
{
    char *filename = "spaces.txt";

    // open the file for writing
    FILE *fp = fopen(filename, "r");

    char line[1024];

    fscanf(fp, "%[^\n]", line);

    fclose(fp);

    char returnedString[1024];
    int returnedStringIndex = 0;
    char simbol;
    int i = 0;
    
    while((simbol = line[i]) != '\0')
    {
        if(i == 0 && simbol == ' ')
        {
            i++;
        }
        else if(line[i] == ' ' && line[i + 1] == ' ')
        {
            i++;
        }
        else
        {
            returnedString[returnedStringIndex] = line[i];
            returnedStringIndex++;
            i++;
        }
    }

    fp = fopen(filename, "w");

    fprintf(fp, "%s", returnedString);

    return 0;
}