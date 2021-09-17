#include <stdio.h>
#include <string.h>

int main()
{
	FILE *file1;
	FILE *file2;
	char source[12];
	char ch;

	printf("\nKopyası Alınacak Dosyanın Adını Giriniz : ");
	scanf("%s", source);

	if ((file1 = fopen(source, "r")) == NULL)
	{
		printf("Kaynak dosya acilmadi.");
		return 1;
	}

	if ((file2 = fopen("yedek.txt", "w")) == NULL)
	{
		printf("yedek.txt dosyasi acilamadi.");
		return 1;
	}

	ch = fgetc(file1);
	while (!feof(file1)) // ya da while(ch != EOF)
	{
		fputc(ch, file2); // ch değişkeninin değerini file2'ye yaz.

		ch = fgetc(file1); // file1'den 1 karakter oku ch değişkenine ata.
	}

	fclose(file1);
	fclose(file2);
	return 0;
}
