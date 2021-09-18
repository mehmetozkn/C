#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[50];
    char surname[50];
    int age;
    if ((file = fopen("deneme.txt", "r")) != NULL)
    {
        printf("File is opening...");
        printf("\n----------KAYITLAR--------\n");
        fscanf(file, "%s %s %d", name, surname, &age);
        while (!feof(file))
        {

            printf("%s %s %d\n", name, surname, age);
            fscanf(file, "%s %s %d", name, surname, &age);
        }
    }
    else
    {
        printf("File is not exist");
        return 1;
    }

    return 0;
}
