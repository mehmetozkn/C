#include <stdio.h>
#include <stdlib.h>

void diziYazdir(int dizi[],int boyut);

int main(void) {
	int dizi[5] = {4,8,3,9,5};
	diziYazdir(dizi, sizeof(dizi)/sizeof(int));

	printf("\n");
	return 0;
}

void diziYazdir(int dizi[],int boyut){
    int i;
    int *p = dizi;
    
    for(i = 0 ; i < boyut ; i++){
        printf("%d\n",*(p+i));
        
    }
}