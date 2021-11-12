#include <stdio.h>
#include <stdlib.h>

void uzunlukYazdir(char * const str[], int kelimeSayisi);

int main(void)
{

	char *iller[20] = {"Sinop", "Mersin", "Mardin", "Kastamonu"};
	uzunlukYazdir(iller, 4);

	printf("\n");
	return EXIT_SUCCESS;
}

void uzunlukYazdir(char * const str[], int kelimeSayisi)
{
	int i;
	int j;
	int size = 0;
	char *pchar;
	
	for (i = 0; i < kelimeSayisi; i++)
	{
		pchar = str[i];
		printf("%s = ", pchar);
		for (j = 0; *pchar != '\0' ; j++)
		{	
			size++;
			pchar++;
		}
		printf("%d",size);
		size = 0;
		printf("\n");
	}
	
}
