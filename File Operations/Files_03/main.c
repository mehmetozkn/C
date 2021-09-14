#include <stdio.h>
#include <string.h>

int main()
{

    FILE *file;
    // 'a' - Dosyayı ekleme modunda açar. Yeni girilen kayıtlar dosya sonuna yazılır. Dosyanın önceden var olması gerekmez.
    // 'a+' - Dosya okuma ve yazma modunda açılır.
    if ((file = fopen("deneme.txt", "a")) != NULL)
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
