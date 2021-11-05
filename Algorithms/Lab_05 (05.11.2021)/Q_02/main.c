#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 void diziYazdir(char *dizi);

int main(void) {
	char array[12] = "mehmet ozkan";
    diziYazdir(array);

	printf("\n");
	return 0;
}

void diziYazdir(char *dizi){
    int i;
    int size = strlen(dizi);
    

    for(i = 0 ; i < size ; i++) printf("%c", *(dizi+i));
    
    

}

