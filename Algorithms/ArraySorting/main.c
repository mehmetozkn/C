#include <stdio.h>
#include <stdlib.h>

void sorting(int[], int);

int main(void)
{
    int array[5] = {3, 2, 4, 1, 5};
    printf("Siralanmadan Once : \n");
    for(int i = 0 ; i  < 5 ; i++) printf("%d, ",array[i]);
    printf("\nSiralandiktan Sonra : \n");
    sorting(array, 5);

    printf("\n");
    return EXIT_SUCCESS;
}

void sorting(int array[], int size)
{
    int i;
    int j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j  < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for(i = 0 ; i < size ;i++) printf("%d, ",array[i]);
}