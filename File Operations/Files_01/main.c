#include <stdio.h>
#include <string.h>

int main()
{

    FILE *file;
    // 'w' - Dosya yazma modunda açılır. Dosya yok ise yeniden oluşturulur. Eğer varsa dosya içindeki kayıtlar silinerek yeniden açılır.
    // 'w+' Dosya okuma ve yazma modunda açılır.
    if ((file = fopen("deneme.txt", "w")) != NULL)
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
