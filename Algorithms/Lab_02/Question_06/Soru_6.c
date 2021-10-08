#include <stdio.h>
#include "myLib.c"

int main(){

    int number;
    printf("Number : "),
    scanf("%d", &number);
    
    printf("Armstrong = %d\n", armstrong(number));
    printf("Strong Number = %d\n", strongNumber(number));



    return 0;
}