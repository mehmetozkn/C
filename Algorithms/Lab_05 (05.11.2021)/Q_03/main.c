#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 void uçluDegis(int *a,int *b,int *c);

int main(void) {
	
    int a = 1;
    int b = 2;
    int c = 3;

    uçluDegis(&a, &b, &c);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d", c);

	printf("\n");
	return 0;
}

void uçluDegis(int *a,int *b,int *c){
    //a=1 b=2 c=3 ==> a=3 b=1 c=2
    int temp = *a;
    *a = *c;
    *c = *c;
    *b = temp; 

    

}

