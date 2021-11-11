#include <stdio.h>
#include <stdlib.h>

void uzunlukYazdir(char *dizi[], int kelimeler);

int main(void)
{

	char *iller[20] = {"Sinop", "Mersin", "Mardin", "Kastamonu"};
	uzunlukYazdir(iller, 4);

	printf("\n");
	return EXIT_SUCCESS;
}

void uzunlukYazdir(char *str[], int kelimeSayisi)
{
	int i;
	int j;
	int size = 0;
	
	
	for (i = 0; i < kelimeSayisi; i++)
	{
		printf("%s = ", (*(str+i)));
		for (j = 0; *(*(str+i)+j) != '\0' ; j++)
		{	
			size++;
		}
		printf("%d",size);
		size = 0;
		printf("\n");
	}
	
}
