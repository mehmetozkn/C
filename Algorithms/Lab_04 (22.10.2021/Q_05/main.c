#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sirala(int[], int);
int size;
int main(int argc, const char *argv[])
{
    srand(time(NULL));
    int n;
    printf("Array Size : ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {

        array[i] = 1 + rand() % 99;
    }

    printf("n : ");
    scanf("%d", &n);

    printf("Normal Hali : ");
    for (int i = 0; i < size; i++) printf("%d, ", array[i]);

    printf("\nSiralandiktan Sonraki Hali : ");
    sirala(array, n);

    printf("\n");
    return 0;
}

void sirala(int array[size], int n)
{
    int temp;
    int j = 0;
    while (j != n)
    {
        temp = array[0];
        for (int i = 0; i < size - 1; i++)
        {
            array[i] = array[i+1];
        }
        array[size-1] = temp;
        j++;
         
    }
   
    for (int i = 0; i < size; i++) printf("%d, ", array[i]);

}
