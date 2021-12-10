#include <stdio.h>
#include <stdlib.h>


struct personel
{
	char ad[20];
	char soyad[20];
	int maas;
	int yas;
	int calismaYil;

};

void enYuksekMaasPer(struct personel* per);
void zamYap(struct personel* per);

int main(void) {

	struct personel array[3] = {{"mehmet","ozkan",3000,20,2},{"ahmet","hakan",5000,25,12},{"ali","bozkurt",4000,30,7}};
	enYuksekMaasPer(array);
	zamYap(array);
	enYuksekMaasPer(array);
	
	

	printf("\n");
	return EXIT_SUCCESS;
}

void enYuksekMaasPer(struct personel *per){
	int i;
	int enYuksekMaas = per[0].maas;

	for(i = 0 ; i < 3 ; i++){
		if(per[i].maas > enYuksekMaas) enYuksekMaas = per[i].maas;
	}

	for(i = 0 ; i < 3 ; i++){
		if(per[i].maas == enYuksekMaas){
			printf("%s\n", per[i].ad);
			printf("%s\n", per[i].soyad);
			printf("%d\n", per[i].maas);
			printf("%d\n", per[i].yas);
			printf("%d\n", per[i].calismaYil);
		}
	}


}

void zamYap(struct personel* per){
	int i;
	for (i = 0; i < 3; i++)
	{
		if(per[i].calismaYil > 10) per[i].maas = per[i].maas*1.1;
		else if (per[i].calismaYil > 5 && per[i].calismaYil < 10 ) per[i].maas =  per[i].maas*1.05;
	}
	
}




