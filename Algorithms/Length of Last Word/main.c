#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s)
{
	int i, wordLength = 0;
	for (i = strlen(s) - 1; i >= 0; i--)
	{

		if (s[i] == ' ' && wordLength != 0)// Kelimeyi saymışsa ve boşluk geldiyse son kelime bitmiş demektir döngü sonlanır.
		{
			break;
		}

		if (s[i] != ' ' || wordLength != 0) // Boşluk yoksa kelimeyi saymaya başlar.
		{
			wordLength++;
		}
		}
	return wordLength;
}
int main()
{
	char array[30] = "   fly me   to   the moon  ";
	printf("Result : %d", lengthOfLastWord(array));

	return 0;
}
