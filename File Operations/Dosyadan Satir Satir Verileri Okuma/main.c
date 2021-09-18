#include <stdio.h>

int main()
{
	FILE *file;
	char satir[100];
	char file_name[20];

	printf("File Name : ");
	scanf("%s", file_name);

	if ((file = fopen(file_name, "r")) == NULL)
	{
		printf("Dosya Acilamadi!");
		return 1;
	}

	while (!feof(file))
	{
		fgets(satir, 100, file); // file'ın gösterdiği dosyadan 99 karakter okuyarak satir adlı değişkene atar.
		printf("%s", satir);
	}

	fclose(file);

	return 0;
}
