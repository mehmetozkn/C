#include <stdio.h>

extern int number;

int arttir(int);

int main(int argc, const char *argv[])
{
    printf("Fonksiyon Cagirilmadan Once : %d", number);
    printf("\nFonksiyon Cagirildiktan Sonra : %d", arttir(number));
    


    printf("\n");
    return 0;
}

