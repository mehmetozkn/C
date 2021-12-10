#include <stdio.h>
#include <stdlib.h>

char *chrBul(char *str, char ch);

int main() {
	char array[] = "mehmet";
    char *result = chrBul(array, 'e');
	printf("Aranan adres = %x", result);

	printf("\n");
	return 0;
}

char *chrBul(char *str, char ch){
	for(int i = 0 ; i < str[i] != '\0' ;i++){

		printf("%d. Eleman Adresi = %x\n",i, str+i);

		if(*(str+i) == ch){
			return (str+i);
		}
	}
	return NULL;
}

