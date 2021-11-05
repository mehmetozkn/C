#include <stdio.h>
#include <stdlib.h>

int *enKucuk(int dizi[], int boyut);

int main() {
    
    int array[5] = {5,2,7,9,11};
   
    int *result = enKucuk(array, 5);
    printf("En Kucuk Elemanın Adresi = %x\n", result);
    printf("En Kucuk Eleman = %d\n", *result);


    printf("\n");
    return 0;
}

int *enKucuk(int dizi[], int boyut){
    int enK = dizi[0];
    int i;
    int *result = dizi;
    for ( i = 0; i < boyut; i++)
    {
        printf("%d. Elemanın Adresi : %x => Eleman = %d\n",i, (result+i),dizi[i]);
        if(dizi[i] < enK){
          result += i;
        }
    }
    
    return result;

}

