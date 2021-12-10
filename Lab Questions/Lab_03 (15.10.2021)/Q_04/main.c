#include <stdio.h>

struct sarki
{
    char sarkiAd;
    char sarkici;
    short yil;
    enum tur
    {
        pop,
        rock,
        klasik,
        rb,
        folk
    } sarkiTur;
};

void printSarki(struct sarki);
struct sarki bilgileriAl(char, char, short, enum tur);

int main(int argc, const char *argv[])
{
    
    struct sarki sarkilar[3];
    struct sarki s1 = {'a', 'b', 1990, klasik};
    struct sarki s2 = {'c', 'd', 1995, rock};
    struct sarki s3 = {'e', 'f', 2000, pop};
    sarkilar[0] = s1;
    sarkilar[1] = s2;
    sarkilar[2] = s3;

    printSarki(s1);
    printf("\n");
    printSarki(s2);
    printf("\n");
    printSarki(s3);
    printf("\n");
    int i;
   for(i = 0 ; i < 3 ; i++){
       if(sarkilar[i].sarkiTur == rock){
           
           printSarki(sarkilar[i]);
       }

   }
   

    printf("\n");
    return 0;
}

void printSarki(struct sarki bilgi)
{
    printf("\nSarki Adi = %c\nSarkici = %c\nYil = %d\nEnum = %d",
           bilgi.sarkiAd, bilgi.sarkici, bilgi.yil, bilgi.sarkiTur);
}

struct sarki bilgileriAl(char pSarkiAdi, char pSarkici, short pYil, enum tur pSarkiTur)
{
    struct sarki s1 = {pSarkiAdi, pSarkici, pYil, pSarkiTur};
    return s1;
}
