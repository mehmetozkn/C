#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 void diziYazdir(char *dizi);

int main(void) {
	char array[12] = {'p','r','o','g','r','a','m','l','a','m','a','\0'};
    diziYazdir(array);

	printf("\n");
	return 0;
}

void diziYazdir(char *dizi){
    int i;
    
    
    for(i = 0 ; i < *(dizi+i) !='\0'  ; i++) printf("%c", *(dizi+i));
    
    

}

