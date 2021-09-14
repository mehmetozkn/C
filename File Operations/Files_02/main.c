#include <stdio.h>
#include <string.h>

int main()
{

    FILE *file;
    // 'r' - Dosya okuma modunda açılır. Dosyanın daha önceden var olması gerekir.
    // 'r+' Dosya okuma ve yazma modunda açılır.
    if ((file = fopen("deneme.txt", "r")) != NULL)
    {
        printf("File is exist");
    }
    else
    {
        printf("File is not exist");
    }

    fclose(file);
    return 0;
}
