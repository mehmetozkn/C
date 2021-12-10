#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int uret();
void goster(void);

int main(int argc, const char *argv[])
{
    
    goster();
   
   
    printf("\n");
    return 0;
}

int uret(){
    
    return(1 + rand() % 9);

}

void goster(void){
    srand(time(NULL));
    int array[10] = {0};
    int i;
    int j;
    int k;

    for(i = 1 ; i <= 100 ;i++)  array[uret()]++;
    for(i = 1 ; i <= 9 ; i++) printf("%d Sayisi %d kere uretildi.\n",i,array[i]);

    for(k = 1; k <= 9;k++){
        printf("%d Sayisi = ",k);
        for(j = 0 ; j < array[k] ;j++){
            printf("*");
        }
        
        printf("\n");

      

    }  

}



