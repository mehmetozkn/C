#include <stdio.h>
#include <string.h>

void bit_goster(unsigned x){
    unsigned c;
    unsigned maske = 1 << 15; // ilk biti 1 olan sayi.

    printf("%7d = ", x);
    for(c = 1 ; c <= 16 ; c++){ // 16 bitlik.

        if(x & maske) printf("1");
        else printf("0");
        x <<= 1;
        if(c % 8 == 0) printf(" ");
        
    }
    putchar('\n');
}
int main()
{
    bit_goster(17); // 17 sayisini ikilik yaz.
    

    return 0;
}
