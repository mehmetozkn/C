#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ters(char *str);

int main()
{
    char array[7] = "mehmet";
    ters(array);

    printf("\n");
    return 0;
}

void ters(char *str)
{
    int i;
    int j = 0;
    int size = strlen(str);
    char reverse[size];
    char *pReverse = reverse;
    for (i = size-1; i >= 0; i--)
    {
        *(pReverse+j) = *(str+i);

        j++;
    }

     for(i = 0 ; i < size ; i++) printf("%c", *(reverse+i));
}
