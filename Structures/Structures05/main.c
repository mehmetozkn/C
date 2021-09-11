#include <stdio.h>
#include <string.h>
struct detay
{
    char renk[20];
    char boyut[20];
    char dipnot[20];
};

struct urunler
{

    char isim[20];
    int sayi;
    struct detay bilgi;
};

int main()
{

    struct urunler urunBir;
    strcpy(urunBir.isim, "Bilgisayar");
    urunBir.sayi = 61;
    strcpy(urunBir.bilgi.renk, "Mavi");
    strcpy(urunBir.bilgi.boyut, "2560x1600");
    strcpy(urunBir.bilgi.dipnot, "Alistirma");

    printf("\n----- Urun Bilgileri -----\n");
    printf("Urun Adi : %s\nUrun Rengi : %s\nUrun Boyutu : %s\nUrun Sayisi : %d\nUrun Dipnotu : %s\n",
    urunBir.isim, urunBir.bilgi.renk, urunBir.bilgi.boyut, urunBir.sayi, urunBir.bilgi.dipnot);

    return 0;
}
