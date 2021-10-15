#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kare(int);
static int uret();

int main(int argc, const char *argv[])
{
   
   printf("Karesini Alma Fonksiyonu : %d", kare(4));
   printf("\n20-80 Arası Rastgele Sayi : %d", uret());

    printf("\n");
    return 0;
}

 int kare(int number){
    return number*number;
}

int uret(){
 srand(time(NULL));
 return (20 + rand() % 60);
}

