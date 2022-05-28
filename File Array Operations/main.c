/*

* @file main.c
* @description Dosyalardaki sayilari toplar.
* @assignment 2.Proje
* @date 23.01.2022
* @author Mehmet  /  mehmet.ozkan@stu.fsm.edu.tr

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include "islemler.c"

int main(int argc, char *argv[])
{
    char secim;
    char islem;
    while (secim != 5)
    {
        printf("\n========= Buyuk Sayilar ile Matematiksel Islemler =========\n");
        printf("Dosya 1'den Sayilari Ekrana Yazdirmak icin 1'e Basiniz.\n");
        printf("Dosya 2'den Sayilari Ekrana Yazdirmak icin 2'ye Basiniz.\n");
        printf("Islem Yapmak Icin 3'e Basiniz.\n");
        printf("Dosyaya Yazilan Sonuclari Ekrana Yazdirmak Icin 4'e Basiniz.\n");
        printf("Cikis icin 5'e Basiniz.\n\n");
        printf("Secim : ");
        scanf("%c", &secim);
        
        if (secim > 48 && secim < 54)
        {

            secim = secim - '0';

            if (secim == 1)
            {
                displayFile("sayi1.txt");
            }
            else if (secim == 2)
            {
                displayFile("sayi2.txt");
            }
            else if (secim == 3)
            {
                scanf("%c", &islem);
                printf("Islem Tipi ( + veya - ) : ");
                scanf("%c", &islem);
                if (islem == '+')
                {
                    dosyaIslemiToplama("sayi1.txt", "sayi2.txt");
                }
                else if (islem == '-')
                {
                    dosyaIslemiCikarma("sayi1.txt", "sayi2.txt");
                }
                else
                {
                    printf("Hatali Girdi Yaptiniz !");
                }
            }
            else if (secim == 4)
            {
                displayFile("result.txt");
            }
            else if (secim == 5)
            {
                printf("Cikis Yapiliyor...");
                exit(1);
            }
        }

        else
        {
            
            printf("Hatali Girdi Yaptiniz !");
            
        }
        scanf("%c", &secim);
      
    }

    return 0;
}
