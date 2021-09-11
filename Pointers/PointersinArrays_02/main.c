#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>


void enbEnkBul(int *arrayp, int n, int *enbp, int *enkp)
{
    int i;
    *enbp = *enkp = *arrayp; // En büyük ve en küçük eleman dizinin ilk elemaný yapýlýr.
    for(i = 1 ; i < n ; i++)
    {
        if(*(arrayp + i) > *enbp) *enbp = *(arrayp + i);
        if(*(arrayp + i) < *enkp) *enkp = *(arrayp + i);


    }
}
int main()
{

    int array[5] = {25,3,17,8,34};
    int enB;
    int enK;
    int i;
    enbEnkBul(array, 5, &enB, &enK);
    for(i = 0 ; i < 5 ; i++) printf("%d.Eleman : %d\n",(i+1),array[i]);
    printf("En Buyuk Eleman : %d\n",enB);
    printf("En Kucuk Eleman : %d\n",enK);

    return 0;
}
