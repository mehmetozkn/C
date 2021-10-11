#include <stdio.h>


int asalMi(int sayi);
int altKumeleriAsalMi(int sayi);

int main(int argc, const char *argv[])
{
    int sayi;
   printf("Sayi : ");
   scanf("%d", &sayi);

    int result = altKumeleriAsalMi(sayi);
    printf("Result = %d ", result);


    printf("\n");
    return 0;
}

int asalMi(int sayi){
    int i;
    for(i = 2 ; i < sayi ; i++){
        if(sayi % i == 0){
            return 0;
        }
    }
    return 1;
}

int altKumeleriAsalMi(int sayi){
    
    if(sayi < 10 ) return 0;

    while (sayi > 0)
    {
        int result = asalMi(sayi);
        if(result == 1){
             sayi /= 10;
             
        }else{
            return 0;
        }
       
    }
    
    return 1;
}




