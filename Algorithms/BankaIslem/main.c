#include <stdio.h>

int main() {

int sayi1;
int sayi2 ;
int sayi3;
float harmonikOrt;

printf("Ilk Sayi : ");
scanf("%d",& sayi1);
printf("Ikinci Sayi : ");
scanf("%d",&sayi2);
printf("Ucuncu Sayi : ");
scanf("%d",&sayi3);
harmonikOrt = (3.0)/(1.0/sayi1)+(1.0/sayi2)+(1.0/sayi3);
printf("\nHarmonik Ortalama = %3.f",harmonikOrt );



	return 0;
}

