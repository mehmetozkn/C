#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *file1;
    FILE *file2;
    char c;
    if (argc != 3)
    {
        printf("Arguments Are Wrong\n");
        printf("Ilki Hedef Ikincisi Kaynak");
        exit(1);
    }

    if ((file1 = fopen(argv[1], "w")) == NULL)
    {
        printf("Hedef Dosya Acilamadi");
    }

    if ((file2 = fopen(argv[2], "r")) == NULL)
    {
        printf("Kaynak Dosya Acilamadi.");
    }

    while (!feof(file2))
    {
        c = fgetc(file2);
        fputc(c, file1);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}