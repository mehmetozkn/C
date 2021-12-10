#include <stdio.h>
#include <stdlib.h>

void fileCharacterRead(char *);
void fileCharacterWrite(char *, char);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Not Enough Arguments");
    }
    else if (argc == 2)
    {
        fileCharacterRead(argv[1]);
    }
    else if (argc == 3)
    {
        fileCharacterWrite(argv[1], argv[2][0]);
        fileCharacterRead(argv[1]);
    }

    return 0;
}

void fileCharacterRead(char *fileName)
{
    FILE *file;
    file = fopen(fileName, "r");
    if (file == NULL)
    {
        printf("File Could Not Be Opened");
    }
    while (!feof(file))
    {
        putchar(fgetc(file));
    }
    fclose(file);
}

void fileCharacterWrite(char *fileName, char ch)
{
    FILE *file;
    if ((file = fopen(fileName, "a")) == NULL)
    {
        printf("File Could Not Be Opened");
        exit(1);
    }
    fputc(ch, file);
    fclose(file);
}