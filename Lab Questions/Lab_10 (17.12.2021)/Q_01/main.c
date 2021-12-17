#include <stdio.h>

main()
{
	FILE *f;
	int i = 0, k = 0;
	char ch;
	f = fopen("text.txt", "r");
	while (feof(f) == NULL)
	{
		ch = getc(f);
		if (ch == '\n')
		{
			k++;
		}
		i++;
	}
	printf("Satir = % d, Karakter sayisi = % d\n", k + 1, i + 1);
	
	return 0;
}