#include <stdio.h>

int main(void)
{
	FILE *file;
	int i, num;
	char name[20];
	file = fopen("text.txt", "r+");
	if (file == NULL)
		printf("File is not exist");
	else
	{
		for (i = 0; i < 1; i++)
		{
			printf("Name : ");
			scanf("%s", name);
			printf("No : ");
			scanf("%d", &num);
			fprintf(file, "%s\t%5d\n", name, num);
			printf("\n");
		}
	}
	rewind(file);
	while (fscanf(file, "%s%d", name, &num) != EOF)
	{
		printf("%s\t%d\n",name, num);
	}

	fclose(file);

	printf("\n");
	return 0;
}
