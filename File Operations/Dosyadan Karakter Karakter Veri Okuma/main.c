#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *file;
	char ch;
	char file_name[20];

	printf("File Name : ");
	scanf("%s", file_name);

	if ((file = fopen(file_name, "r")) == NULL){
		printf("Dosya Acilamadi!");
		return 1;
	}

	ch = fgetc(file);

	while (ch != EOF)
	{
		printf("%c", ch);
		ch = fgetc(file);
	}

	fclose(file);

	return 0;
}
