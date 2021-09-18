#include <stdio.h>
#include <string.h>

/* Bir ilçedeki banka şubesi emekli maaş ödemesi usulsüzlüğünü tespit etmek amacıyla
güncel maaş ödemesi yaptığı kişilerin TCKimlik numaraları ile son 10 yılda ilçede ölen kişilerin TC Kimlik
numaralarıını karşılaştırmak istemektedir. Bu amaçla hazırlanan 'maaslar.txt' ve 'oluler.txt' adındaki
2 dosyayı karşılaştırarak ölü olduğu halde maaş ödemesi devam edenlerin TC Kimlik numaralarını 
'supheli.txt' dosyasına kaydeden program. */

int main()
{
	char tcNo1[12], tcNo2[12]; // TC 11 Haneli + 1
	FILE *file1, *file2, *file3;

	file1 = fopen("maaslar.txt", "r");
	file2 = fopen("oluler.txt", "r");
	file3 = fopen("supheliler.txt", "w");

	if (file1 == NULL || file2 == NULL || file3 == NULL)
	{
		printf("Dosyalardan biri ya da daha fazlasi acilamadi!");
		return 1;
	}

	fscanf(file1, "%s", tcNo1);
	while (!feof(file1)) // Maaşlar dosyasını sonuna kadar döner.
	{
		rewind(file2); // Ölüler dosyasını başa konumlar.
		fscanf(file2, "%s", tcNo2);
		while (!feof(file2)) // Ölüler dosyasını sonuna kadar döner.
		{
			if (strcmp(tcNo1, tcNo2) == 0)
			{ // Tcler eşleşirse şüpheliler dosyasına Tcyi yazar.
				fprintf(file3, "%s \n", tcNo1);
				
			}
			fscanf(file2, "%s", tcNo2);
		}
		 fscanf(file1, "%s", tcNo1);
	}

	fclose(file1);
	fclose(file2);
	fclose(file3);

	return 0;
}
