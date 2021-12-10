#include <stdio.h>
#include <stdlib.h>
#include "myLib.c"

int main(void) {

	complex c1,c2,c3;
	complex cresult;

	c1.re = 3;
	c1.im = 2;

	c2.re = 4;
	c2.im = 5;

	c3.re = 6;
	c3.im = 1;

	complex dizi[3] = {c1,c2,c3};

	cresult = topla(&c1,&c2);
	karmasikYazdir(cresult);
	printf("\n");
	cresult = carpim(&c1,&c2);
	karmasikYazdir(cresult);
	printf("\n");
	yazdirKarmasikDizi(dizi,3);
	

	printf("\n");
	return EXIT_SUCCESS;
}




