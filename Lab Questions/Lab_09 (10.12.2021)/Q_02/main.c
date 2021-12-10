#include <stdio.h>
#include <stdlib.h>

int *fileFrequencyRead(char *);

int main(int argc, char *argv[])
{
    int *array;
    int i;

    if (argc < 2)
    {
        printf("Not Enough Arguments");
    }
    else
    {
        array = fileFrequencyRead(argv[1]);
        for(i = 0 ; i < 26 ; i++){
            printf("%c - %d\t", 'a'+1, array[i]);
        }
    }

    return 0;
}

int *fileFrequencyRead(char *fileName)
{
    FILE *file;
    char c;
    int *frequency = (int *)calloc(26, sizeof(int));

    file = fopen(fileName, "r");
    if (file == NULL)
    {
        printf("File Could Not Be Opened.");
        exit(1);
    }
    while (!feof(file))
    {
        c = fgetc(file);
        frequency[c - 'a']++;
    }

    fclose(file);
    return frequency;
}