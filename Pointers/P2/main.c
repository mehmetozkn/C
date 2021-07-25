#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
int ayir(double sayi, char *ip, int *tp, double *op)
{
    double pozDeger;
    if(sayi > 0)*ip = '+';
    if(sayi < 0)*ip = '-';
    pozDeger = fabs(sayi); // Mutlak degerini alir.
    *tp = floor(pozDeger); // Virgulden sonrasini atar.
    *op = pozDeger - *tp;




}
int main()
{
    double sayi;
    double ondalik;
    char isaret;
    int tam;

    printf("Ondalikli Sayiyi Giriniz : ");
    scanf("%lf",&sayi);
    ayir(sayi, &isaret, &tam, &ondalik);
    printf("%4.lf Sayisinin analizi : \n",sayi);
    printf("Sayinin isareti : %c\n",isaret);
    printf("Sayinin tam kismi : %d\n0",tam);
    printf("Sayinin ondalikli kismi : %.4lf\n",ondalik);


    return 0;
}
