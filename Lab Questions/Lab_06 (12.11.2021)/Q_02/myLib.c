#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

complex topla(complex *c1, complex *c2){
    complex result;
    result.re = c1->re + c2->im;
    result.im = c1->im + c2->im;
    return result;

}

complex carpim(complex *c1, complex *c2){
    complex result;
    result.re = (c1->re * c2->re) - (c1->im * c2->im);
    result.im = (c1->re + c2->re) + (c1->im + c2->re);
    return result;
}

void karmasikYazdir(complex c1){
    printf("%2.f", c1.re);
    if(c1.im < 0) printf("%2.f", c1.im);
    else printf("+%2.fi", c1.im);
}

void yazdirKarmasikDizi(complex *dizi, int size){
    int i;
    for(i = 0 ; i < size ;i++){
        printf("\n");
        karmasikYazdir(dizi[i]);
    }
}