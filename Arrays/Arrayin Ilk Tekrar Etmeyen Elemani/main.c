#include <stdio.h>


int firstUnique(int dizi[])
{
    int frekans[] = {0,0,0,0,0,0,0};
    int i;

    for(i = 0 ; i < 6 ; i++)
    {

        frekans[dizi[i]-1]++;

    }
    int j;

    for(j = 0 ; j < 6 ; j++)
    {

        if(frekans[dizi[j]-1] == 1 )
        {
            return dizi[j];
        }

    }
    return 1;

}
int main()
{
    int dizi[] = {3,3,2,5,2,4};
    int sayi = firstUnique(dizi);
    printf("First Unique Element : %d",sayi);


    return 0;
}
