#include <stdio.h>


int firstRepeating(int dizi[])
{
    int frekans[] = {0,0,0,0,0,0,0};
    int i;

    for(i = 0 ; i < 7 ; i++)
    {

        frekans[dizi[i]-1]++;

        if(frekans[dizi[i]-1] > 1)
        {

            return dizi[i];
        }

    }





}
int main()
{
    int dizi[] = {3,5,1,5,7,7,6};
    int sayi = firstRepeating(dizi);
    printf("First Repeating Element : %d",sayi);


    return 0;
}
