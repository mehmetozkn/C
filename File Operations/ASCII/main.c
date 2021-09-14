#include <stdio.h>
#include <string.h>
// ASCII kod ve karakterlerini dosyaya kaydeden program.
int main()
{
    FILE *file;
    int i;
    if ((file = fopen("asc.txt", "w")) != NULL)
    {
        for (i = 0; i <= 255; i++) fprintf(file, "\t %d \t %c \n", i, i);
        fclose(file);
    }
    else
    {
        printf("File is not exist!");
    }

    return 0;
}
