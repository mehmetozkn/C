#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 void ucluDegis(int *a,int *b,int *c);

int main(void) {
	
    int a = 1;
    int b = 2;
    int c = 3;

    for(int i = 0 ; i < 3 ;i++){

    ucluDegis(&a, &b, &c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("---------------\n");
    }
  

	printf("\n");
	return 0;
}

void ucluDegis(int *a,int *b,int *c){
    //a=1 b=2 c=3 ==> a=3 b=1 c=2
    int temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;

    

}

