#include <stdio.h>

void azalt_01();
void azalt_02();

int main(int argc, const char *argv[])
{
   azalt_01();
   azalt_02();

   azalt_01();
   azalt_02();

   azalt_01();
   azalt_02();
   


    printf("\n");
    return 0;
}

void azalt_01(){
   static int number = 20;
    number--;
    printf("\nAzalt_01 Fonksiyonu : %d", number);
}

void azalt_02(){
    int number = 20;
    number--;
    printf("\nAzalt_02 Fonksiyonu : %d", number);
}



