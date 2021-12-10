#ifndef MYLIB_H_
#define MYLIB_H_

typedef struct complex
{
	float re;
	float im;
}complex;

complex topla(complex *, complex *);
complex carpim(complex *, complex *);
void karmasikYazdir(complex);
void yazdirKarmasikDizi(complex *, int);




#endif