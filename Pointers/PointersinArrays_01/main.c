#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[5] = {25,42,4,16,7};
    int *aptr = a;
    int i;

    printf("\n-------------------------\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("a[%d] = %d \n", i, a[i] );

    }

    printf("\n-------------------------\n");

    for(i = 0 ; i < 5 ; i++)
    {

        printf("*(a+%d) = %d \n", i, *(a+i));
    }

    printf("\n-------------------------\n");

    for(i = 0 ; i < 5 ; i++)
    {

        printf("*(aptr+%d) = %d \n", i, *(aptr+i));
    }

    printf("\n-------------------------\n");

    for(i = 0 ; i < 5 ; i++)
    {

        printf("aptr[%d] = %d \n", i,     aptr[i]);
    }

    return 0;
}
