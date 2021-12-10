#include <stdio.h>
#include <stdlib.h>

int divide(int, int,int *);
int bolum;
int kalan;
int main(void) {
    int bolunen = 13;
    int bolen = 5;
    int kalan;
    int result = divide(bolunen, bolen, &kalan);
    printf("Bolum = %d, Kalan = %d", result, kalan);
    
	

	printf("\n");
	return EXIT_SUCCESS;
}

int divide(int bolunen, int bolen,int *kalan){
    *kalan = bolunen%bolen;
    return bolunen/bolen;
}


