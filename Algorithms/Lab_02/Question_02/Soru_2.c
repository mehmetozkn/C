#include <stdio.h>

int armstrong(int number);

int basamakBulma(int num);

int usAlma(int num, int us);

int main(int argc, const char *argv[])
{
    int number;
    printf("Number : ");
    scanf("%d", &number);
    int result = armstrong(number);
    if(result == 1) printf("%d is Armstrog Number.\n", number);
    else printf("%d is not Armstrong Number.\n", number);


    return 0;
}


int armstrong(int number)
{
    int temp, sum = 0;
    int basamakSayisi = basamakBulma(number);
    temp = number;
    // 371
    while (temp != 0)
    {
        sum += usAlma(temp % 10,basamakSayisi);
        
        temp /= 10;
    }

    if (sum == number) return 1;
    return 0;
        
}

int basamakBulma(int num){
    int basamak = 0;
    
    if(num < 0 ) num = num * -1; // Negatif sayinin basamak sayısı bulmak için.

    while (num != 0)
    {
        basamak++;
        num /= 10;
    }
    
    return basamak;
    
}

int usAlma(int num, int us){
    int i = 1, sum = 1;
    for(; i <= us ; i++){
        sum *= num;
    }
    return sum;
}
